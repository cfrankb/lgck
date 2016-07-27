#include "stdafx.h"
#undef INT8
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include "Const.h"
#include "../shared/Game.h"
#include "../shared/FileWrap.h"
#include "../shared/Level.h"
#include "../shared/interfaces/IMusic.h"
#include "../shared/interfaces/ISound.h"
//#include "../shared/implementers/sfml/dm_sfml.h"
#include "../shared/implementers/sfml/gr_sfml.h"
#include "../shared/implementers/sfml/im_sfml.h"
#include "../shared/implementers/sdl/mu_sdl.h"
#include "../shared/implementers/sdl/sn_sdl.h"
#include "../shared/inputs/sfml/kt_sfml.h"
#include "../shared/GameEvents.h"
#include "../shared/Snapshot.h"
#include "../shared/DisplayManager.h"

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

CGame *g_game;
int g_currLevel = 0;
int g_skill = 0;

//int g_state;
//unsigned long long g_timeTo;

// extern functions
void add_lgck_res();

void updateScreen(void)
{
    // cache the images
    static bool image_cached;
    if (!image_cached) {
        g_game->m_arrFrames.add(g_game->m_points);
        g_game->cacheImages();
        image_cached = true;
        printf("image cached\n");
    }

    CGRSfml * gr = static_cast<CGRSfml *>(g_game->graphics());
    if (gr) {
        g_game->updateScreen();
        gr->update();
    }
}

void unfoldEvents(void)
{
    int result = g_game->runEngine();
    bool dead = false;
    switch (result) {
        case CGame::EVENT_NO_EVENT:
            // nothing happened
        break;
            
        case CGame::EVENT_QUIT:
            exit(EXIT_SUCCESS);
        break;
        
        case CGame::EVENT_LEVEL_COMPLETED:
            g_game->snapshot().clear();
            if (g_game->svar("WarpTo") == CGame::INVALID) {
                // we're not warping to another level
                ++g_currLevel;
            } else {
                g_currLevel = g_game->svar("WarpTo");
            }
            if (g_currLevel < g_game->getSize() - 1) {
                g_game->var("level") = g_currLevel;
                g_game->setEngineState(CGame::ES_INTRO);
            } else {
                puts("You have sucessfully completed this game.");
                exit(EXIT_SUCCESS);
            }
        break;

        case CGame::EVENT_TIMEOUT:
            puts("You ran out of time.");
            dead = true;
        break;

        case CGame::EVENT_PLAYER_DIED:
            puts("You were killed.");
            dead = true;
        break;

        case CGame::EVENT_NO_PLAYER:
            puts("No player object.");
            exit(EXIT_FAILURE);
        break;

        default:
            printf("unknown event: %d\n", result);
            exit(EXIT_FAILURE);
        break;
    }

    if (dead) {
        --g_game->counter("lives");
        if (!g_game->counter("lives")) {
            puts("Game Over");
            exit(EXIT_SUCCESS);
        } else {
            if (result==CGame::EVENT_TIMEOUT) {
                g_game->setEngineState(CGame::ES_TIMEOUT);
            } else {
                g_game->setEngineState(CGame::ES_INTRO);
            }
        }
    }
    
    // update screen
    updateScreen();
}

void notifyKeyCode(int keyCode, bool state)
{
    int lgckCode = CKeyTranslator::translate(keyCode);
    if (lgckCode != -1) {
        g_game->setKey(lgckCode, state);
        g_game->setLastKey(lgckCode);
        if (state) {
            g_game->callLvEvent(CLevel::EL_KEY_PRESSED);
        } else {
            g_game->callLvEvent(CLevel::EL_KEY_UP);
        }
    }
}

void runGame(sf::RenderWindow *window)
{
    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            switch (event.type) {
            case sf::Event::Closed:
                window->close();
                break;
            // key pressed
            case sf::Event::Resized:
                break;
            case sf::Event::KeyPressed:
                notifyKeyCode(event.key.code, true);
                break;
            case sf::Event::KeyReleased:
                notifyKeyCode(event.key.code, false);
                break;
            case sf::Event::LostFocus:
                break;
            case sf::Event::GainedFocus:
                break;
            case sf::Event::TextEntered:
                //if (event.text.unicode < 128)
                    //std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
                break;
            default:
            break;
            }
            
        }
        unfoldEvents();
    }
   // exit(EXIT_SUCCESS);
}

int main( int argc, char* args[] )
{
    CGame game;
    g_game = & game;
    char *lgckdb;
    if (argc < 2) {
        game.setFileName(" ../../data/vla3demo241.lgckdb");
    } else {
        game.setFileName(args[1]);
    }
    printf("file: %s\n", lgckdb);
    add_lgck_res();
    printf("reading data...\n");
    if (!game.read()) {
        printf("failed to read gamedata:%s [%s]\n", game.getFileName(), game.getLastError());
        return EXIT_FAILURE;
    }

    CSndSDL *sn = new CSndSDL();
    game.attach((ISound*)sn);
    CMusicSDL *mu = new CMusicSDL();
    game.attach((IMusic*)mu);
    CGRSfml * gm = new CGRSfml(&game);
    game.attach(gm->cache());
    game.attach((IGraphics *) gm);
    game.initSounds();
    game.initSettings();
    game.initFonts();
    game.setLives(5);
    game.setHealth(32);
    g_skill = 0;
    srand(static_cast<unsigned int>(time(NULL)));
    g_currLevel = 8;//rand() % game.getSize();
    g_game->setLevel(g_currLevel);
    g_game->setEngineState(CGame::ES_INTRO);
    g_game->callGameEvent(CGameEvents::EG_INIT_GAME);
    runGame(gm->window());
    // bitmap font
	return 0;
} 


