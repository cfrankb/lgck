/*
    LGCK Builder GUI
    Copyright (C) 1999, 2011  Francois Blanchette

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QApplication>
#include "../shared/stdafx.h"
#include "../shared/Credits.h"
#include "mainwindow.h"
#include "DlgSelect.h"
#include <QFileDialog>
#include <QGLWidget>
#include <QSettings>
#include "WizGame.h"
#include "ss_version.h"
#include <ctime>

static char appName[] = "LGCK builder";
static char appTitle[] = "LGCK builder IDE";
static char author[] = "cfrankb";

int main(int argc, char *argv[])
{
    //QApplication::setAttribute(Qt::AA_UseDesktopOpenGL, false);
    //QApplication::setAttribute(Qt::AA_UseSoftwareOpenGL, true);
    QApplication app(argc, argv);
    MainWindow w;
    w.createEventEditor();

    char m_fileFilter[] = "LGCK games (*.lgckdb)";
    QString fileName = "";
    bool done = false;
    QSettings settings(author, appName);
    settings.beginGroup("Editor");
    bool skipSplash = settings.value("skipSplash", false).toBool();
    settings.endGroup();

    if (!skipSplash) {
        do {
            int version = SS_LGCK_VERSION;
            int vv[4]={0,0,0,0};
            for (int i=3; i >= 0; --i) {
                vv[i] = version & 0xff;
                version /= 256;
            }
            QString ver = QString().sprintf("%s %.2d.%.2d.%.2d.%.2d", appTitle, vv[0], vv[1], vv[2], vv[3]);
            CDlgSelect * dlg = new CDlgSelect(&w);
            dlg->setWindowTitle(ver);
            dlg->raise();
            dlg->setWindowState(Qt::WindowActive) ;
            dlg->exec();
            CWizGame *wiz;
            switch(dlg->getState()) {
            case CDlgSelect::OPEN:
                fileName = QFileDialog::getOpenFileName(&w, w.tr("Open"), "", w.tr(m_fileFilter));
                if (!fileName.isEmpty()) {
                    done = true;
                }
            break;

            case CDlgSelect::NEW:
                wiz = new CWizGame();
                wiz->init(w.getGame());
                if (wiz->exec()) {
                    wiz->save();
                    w.initToolBox();
                    done = true;
                    w.getGame()->setDirty(true);
                }
                break;

            case CDlgSelect::CLOSE:
                return 0;

            case CDlgSelect::NO_SHOW:
                skipSplash = true;

            case CDlgSelect::SKIP:
                done = true;
            }

            delete dlg;
        } while (!done);
    }

    settings.beginGroup("Editor");
    settings.setValue("skipSplash", skipSplash);
    settings.endGroup();

    w.show();
    if (!fileName.isEmpty()) {
        w.open(fileName);
    }
    srand( time( NULL ) );
    return app.exec();
}
