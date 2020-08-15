/*
    LGCK Builder Runtime
    Copyright (C) 1999, 2020  Francois Blanchette

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

typedef struct  {
    const char *fnName;
    lua_CFunction fnAddr;
} FUNCTION;

#define fn( fnName ) { #fnName, fnName },
#define alias( aliasName, fnName ) { aliasName, fnName },
#define luaFn( __fn__ ) int __fn__ (lua_State *);

luaFn ( addToHP )
luaFn ( addToInventory )
luaFn ( addToScore )
luaFn ( alert )
luaFn ( AND )
luaFn ( callGameEvent )
luaFn ( callLvEvent )
luaFn ( callTrigger )
luaFn ( cancelEvent )
luaFn ( clearDisplay )
luaFn ( clearKeys )
luaFn ( counter_add )
luaFn ( counter_dec )
luaFn ( counter_get )
luaFn ( counter_inc )
luaFn ( counter_set )
luaFn ( countGoals )
luaFn ( decTimeLeft )
luaFn ( display_count )
luaFn ( display_enableShadows )
luaFn ( display_move )
luaFn ( display_new )
luaFn ( display_remove )
luaFn ( display_setAlpha )
luaFn ( display_setColor )
luaFn ( display_setExpireTime )
luaFn ( display_setFlagXY )
luaFn ( display_setFont )
luaFn ( display_setFontSize )
luaFn ( display_setImage )
luaFn ( display_setShadowColor )
luaFn ( display_setShadowOffset )
luaFn ( display_setTemplate )
luaFn ( display_setText )
luaFn ( display_setType )
luaFn ( display_setVisible )
luaFn ( display_sizeText )
luaFn ( element_move )
luaFn ( element_moveBy )
luaFn ( element_moveTo )
luaFn ( element_new )
luaFn ( element_setImage )
luaFn ( element_setVisible )
luaFn ( findDisplay )
luaFn ( findLayer )
luaFn ( findSprite )
luaFn ( frameSet_getSize )
luaFn ( getBkColor )
luaFn ( getClosure )
luaFn ( getClosureEvent )
luaFn ( getClosureTime )
luaFn ( getGoalLeft )
luaFn ( getHP )
luaFn ( getImage )
luaFn ( getImageSize )
luaFn ( getLastKey )
luaFn ( getLevelGoal )
luaFn ( getLookUp )
luaFn ( getNextSecond )
luaFn ( getPlayerID )
luaFn ( getScore )
luaFn ( getScreenSize )
luaFn ( getSkill )
luaFn ( getTicks )
luaFn ( getTickScale )
luaFn ( getTime )
luaFn ( getTimeLeft )
luaFn ( getVersion )
luaFn ( getWrapFlag )
luaFn ( hasGravity )
luaFn ( hasItem )
luaFn ( isEndLevelMeet )
luaFn ( isLevelEnded )
luaFn ( killPlayer )
luaFn ( layer_clear )
luaFn ( layer_delete )
luaFn ( layer_getElement )
luaFn ( layer_getOffsetX )
luaFn ( layer_getOffsetY )
luaFn ( layer_getSize )
luaFn ( layer_new )
luaFn ( layer_setOffsetX )
luaFn ( layer_setOffsetY )
luaFn ( layer_setSpeed )
luaFn ( loadGame )
luaFn ( MAX )
luaFn ( MIN )
luaFn ( nextTick )
luaFn ( openStream )
luaFn ( OR )
luaFn ( pause )
luaFn ( playSound )
luaFn ( playStream )
luaFn ( proto_get )
luaFn ( rand )
luaFn ( remap )
luaFn ( removeFromInventory )
luaFn ( resetInventory )
luaFn ( saveGame )
luaFn ( scene_getSize )
luaFn ( setBkColor )
luaFn ( setBorderColor )
luaFn ( setClosure )
luaFn ( setEndLevel )
luaFn ( setHP )
luaFn ( setKey )
luaFn ( setLevelGoal )
luaFn ( setLookUp )
luaFn ( setNextSecond )
luaFn ( setSpeed )
luaFn ( setTickScale )
luaFn ( setWrapFlag )
luaFn ( SHL )
luaFn ( SHR )
luaFn ( snapshot_clear )
luaFn ( snapshot_reload )
luaFn ( snapshot_take )
luaFn ( sprite_activate )
luaFn ( sprite_addItem )
luaFn ( sprite_attackPlayer )
luaFn ( sprite_callEvent )
luaFn ( sprite_canFall )
luaFn ( sprite_canMove )
luaFn ( sprite_changeTo )
luaFn ( sprite_childCount )
luaFn ( sprite_clear )
luaFn ( sprite_copy )
luaFn ( sprite_frameCount )
luaFn ( sprite_freeze )
luaFn ( sprite_get )
luaFn ( sprite_getClass )
luaFn ( sprite_getExtra )
luaFn ( sprite_getHeight )
luaFn ( sprite_getHitTest )
luaFn ( sprite_getHP )
luaFn ( sprite_getName )
luaFn ( sprite_getObjType )
luaFn ( sprite_getString )
luaFn ( sprite_getTriggerKey )
luaFn ( sprite_getUID )
luaFn ( sprite_getVars )
luaFn ( sprite_getWidth )
luaFn ( sprite_hasItem )
luaFn ( sprite_hide )
luaFn ( sprite_isActive )
luaFn ( sprite_isDead )
luaFn ( sprite_isFrozen )
luaFn ( sprite_isGoal )
luaFn ( sprite_isHidden )
luaFn ( sprite_isMonster )
luaFn ( sprite_isPlayer )
luaFn ( sprite_isPlayerThere )
luaFn ( sprite_isVisible )
luaFn ( sprite_kill )
luaFn ( sprite_land )
luaFn ( sprite_map )
luaFn ( sprite_markAsGoal )
luaFn ( sprite_move )
luaFn ( sprite_moveBy )
luaFn ( sprite_moveTo )
luaFn ( sprite_new )
luaFn ( sprite_removeItem )
luaFn ( sprite_resetInventory )
luaFn ( sprite_set )
luaFn ( sprite_setAim )
luaFn ( sprite_setHP )
luaFn ( sprite_setImage )
luaFn ( sprite_setOwner )
luaFn ( sprite_setState )
luaFn ( sprite_setTriggerKey )
luaFn ( sprite_show )
luaFn ( sprite_spawn )
luaFn ( sprite_stopAnimation )
luaFn ( sprite_testFlags )
luaFn ( sprite_togglePathPlayback )
luaFn ( sprite_triggerHitState )
luaFn ( sprite_tryAnimation )
luaFn ( sprite_tryPath )
luaFn ( sprite_unFreeze )
luaFn ( sprite_unMap )
luaFn ( sprite_unmarkAsGoal )
luaFn ( spriteIdFromUuid )
luaFn ( ss_animate )
luaFn ( ss_autoCenter )
luaFn ( ss_clear )
luaFn ( ss_clearKeys )
luaFn ( ss_doManage )
luaFn ( ss_drawText )
luaFn ( ss_getNextTick )
luaFn ( ss_getPause )
luaFn ( ss_manageAuto )
luaFn ( ss_manageKeyEvents )
luaFn ( ss_managePlayer )
luaFn ( ss_manageTasks )
luaFn ( ss_notifyAll )
luaFn ( ss_notifyClosure )
luaFn ( ss_paint )
luaFn ( ss_paintImage )
luaFn ( ss_pollDevice )
luaFn ( ss_setNextTick )
luaFn ( stopStream )
luaFn ( strv_del )
luaFn ( strv_get )
luaFn ( strv_set )
luaFn ( testAim )
luaFn ( testJoyState )
luaFn ( testKey )
luaFn ( triggerPlayerHitState )
luaFn ( updateHP )
luaFn ( updateJoyState )
luaFn ( uuid )
luaFn ( var_del )
luaFn ( var_get )
luaFn ( var_set )
luaFn ( warpTo )
luaFn ( XOR )

static FUNCTION exports [] = {
    fn ( addToHP )
    fn ( addToInventory )
    fn ( addToScore )
    fn ( alert )
    fn ( AND )
    fn ( callGameEvent )
    fn ( callLvEvent )
    fn ( callTrigger )
    fn ( cancelEvent )
    fn ( clearDisplay )
    fn ( clearKeys )
    fn ( counter_add )
    fn ( counter_dec )
    fn ( counter_get )
    fn ( counter_inc )
    fn ( counter_set )
    fn ( countGoals )
    fn ( decTimeLeft )
    fn ( display_count )
    fn ( display_enableShadows )
    fn ( display_move )
    fn ( display_new )
    fn ( display_remove )
    fn ( display_setAlpha )
    fn ( display_setColor )
    fn ( display_setExpireTime )
    fn ( display_setFlagXY )
    fn ( display_setFont )
    fn ( display_setFontSize )
    fn ( display_setImage )
    fn ( display_setShadowColor )
    fn ( display_setShadowOffset )
    fn ( display_setTemplate )
    fn ( display_setText )
    fn ( display_setType )
    fn ( display_setVisible )
    fn ( display_sizeText )
    fn ( element_move )
    fn ( element_moveBy )
    fn ( element_moveTo )
    fn ( element_new )
    fn ( element_setImage )
    fn ( element_setVisible )
    fn ( findDisplay )
    fn ( findLayer )
    fn ( findSprite )
    fn ( frameSet_getSize )
    fn ( getBkColor )
    fn ( getClosure )
    fn ( getClosureEvent )
    fn ( getClosureTime )
    fn ( getGoalLeft )
    fn ( getHP )
    fn ( getImage )
    fn ( getImageSize )
    fn ( getLastKey )
    fn ( getLevelGoal )
    fn ( getLookUp )
    fn ( getNextSecond )
    fn ( getPlayerID )
    fn ( getScore )
    fn ( getScreenSize )
    fn ( getSkill )
    fn ( getTicks )
    fn ( getTickScale )
    fn ( getTime )
    fn ( getTimeLeft )
    fn ( getVersion )
    fn ( getWrapFlag )
    fn ( hasGravity )
    fn ( hasItem )
    fn ( isEndLevelMeet )
    fn ( isLevelEnded )
    fn ( killPlayer )
    fn ( layer_clear )
    fn ( layer_delete )
    fn ( layer_getElement )
    fn ( layer_getOffsetX )
    fn ( layer_getOffsetY )
    fn ( layer_getSize )
    fn ( layer_new )
    fn ( layer_setOffsetX )
    fn ( layer_setOffsetY )
    fn ( layer_setSpeed )
    fn ( loadGame )
    fn ( MAX )
    fn ( MIN )
    fn ( nextTick )
    fn ( openStream )
    fn ( OR )
    fn ( pause )
    fn ( playSound )
    fn ( playStream )
    fn ( proto_get )
    fn ( rand )
    fn ( remap )
    fn ( removeFromInventory )
    fn ( resetInventory )
    fn ( saveGame )
    fn ( scene_getSize )
    fn ( setBkColor )
    fn ( setBorderColor )
    fn ( setClosure )
    fn ( setEndLevel )
    fn ( setHP )
    fn ( setKey )
    fn ( setLevelGoal )
    fn ( setLookUp )
    fn ( setNextSecond )
    fn ( setSpeed )
    fn ( setTickScale )
    fn ( setWrapFlag )
    fn ( SHL )
    fn ( SHR )
    fn ( snapshot_clear )
    fn ( snapshot_reload )
    fn ( snapshot_take )
    fn ( sprite_activate )
    fn ( sprite_addItem )
    fn ( sprite_attackPlayer )
    fn ( sprite_callEvent )
    fn ( sprite_canFall )
    fn ( sprite_canMove )
    fn ( sprite_changeTo )
    fn ( sprite_childCount )
    fn ( sprite_clear )
    fn ( sprite_copy )
    fn ( sprite_frameCount )
    fn ( sprite_freeze )
    fn ( sprite_get )
    fn ( sprite_getClass )
    fn ( sprite_getExtra )
    fn ( sprite_getHeight )
    fn ( sprite_getHitTest )
    fn ( sprite_getHP )
    fn ( sprite_getName )
    fn ( sprite_getObjType )
    fn ( sprite_getString )
    fn ( sprite_getTriggerKey )
    fn ( sprite_getUID )
    fn ( sprite_getVars )
    fn ( sprite_getWidth )
    fn ( sprite_hasItem )
    fn ( sprite_hide )
    fn ( sprite_isActive )
    fn ( sprite_isDead )
    fn ( sprite_isFrozen )
    fn ( sprite_isGoal )
    fn ( sprite_isHidden )
    fn ( sprite_isMonster )
    fn ( sprite_isPlayer )
    fn ( sprite_isPlayerThere )
    fn ( sprite_isVisible )
    fn ( sprite_kill )
    fn ( sprite_land )
    fn ( sprite_map )
    fn ( sprite_markAsGoal )
    fn ( sprite_move )
    fn ( sprite_moveBy )
    fn ( sprite_moveTo )
    fn ( sprite_new )
    fn ( sprite_removeItem )
    fn ( sprite_resetInventory )
    fn ( sprite_set )
    fn ( sprite_setAim )
    fn ( sprite_setHP )
    fn ( sprite_setImage )
    fn ( sprite_setOwner )
    fn ( sprite_setState )
    fn ( sprite_setTriggerKey )
    fn ( sprite_show )
    fn ( sprite_spawn )
    fn ( sprite_stopAnimation )
    fn ( sprite_testFlags )
    fn ( sprite_togglePathPlayback )
    fn ( sprite_triggerHitState )
    fn ( sprite_tryAnimation )
    fn ( sprite_tryPath )
    fn ( sprite_unFreeze )
    fn ( sprite_unMap )
    fn ( sprite_unmarkAsGoal )
    fn ( spriteIdFromUuid )
    fn ( ss_animate )
    fn ( ss_autoCenter )
    fn ( ss_clear )
    fn ( ss_clearKeys )
    fn ( ss_doManage )
    fn ( ss_drawText )
    fn ( ss_getNextTick )
    fn ( ss_getPause )
    fn ( ss_manageAuto )
    fn ( ss_manageKeyEvents )
    fn ( ss_managePlayer )
    fn ( ss_manageTasks )
    fn ( ss_notifyAll )
    fn ( ss_notifyClosure )
    fn ( ss_paint )
    fn ( ss_paintImage )
    fn ( ss_pollDevice )
    fn ( ss_setNextTick )
    fn ( stopStream )
    fn ( strv_del )
    fn ( strv_get )
    fn ( strv_set )
    fn ( testAim )
    fn ( testJoyState )
    fn ( testKey )
    fn ( triggerPlayerHitState )
    fn ( updateHP )
    fn ( updateJoyState )
    fn ( uuid )
    fn ( var_del )
    fn ( var_get )
    fn ( var_set )
    fn ( warpTo )
    fn ( XOR )
    alias ( "activateSprite", sprite_activate )
    alias ( "addDisplayC", display_new )
    alias ( "addElement", element_new )
    alias ( "addLayerC", layer_new )
    alias ( "addSpriteC", sprite_new )
    alias ( "attackPlayer", sprite_attackPlayer )
    alias ( "callLevelEvent", callLvEvent )
    alias ( "callObjEvent", sprite_callEvent )
    alias ( "canFall", sprite_canFall )
    alias ( "canMove", sprite_canMove )
    alias ( "changeTo", sprite_changeTo )
    alias ( "clearSprite", sprite_clear )
    alias ( "copySpriteC", sprite_copy )
    alias ( "counters_add", counter_add )
    alias ( "counters_dec", counter_dec )
    alias ( "counters_get", counter_get )
    alias ( "counters_inc", counter_inc )
    alias ( "counters_set", counter_set )
    alias ( "displayEnableShadows", display_enableShadows )
    alias ( "displaySetAlpha", display_setAlpha )
    alias ( "displaySetColor", display_setColor )
    alias ( "displaySetExpireTime", display_setExpireTime )
    alias ( "displaySetFontSize", display_setFontSize )
    alias ( "displaySetImage", display_setImage )
    alias ( "displaySetShadowColor", display_setShadowColor )
    alias ( "displaySetShadowOffset", display_setShadowOffset )
    alias ( "displaySetText", display_setText )
    alias ( "displaySetType", display_setType )
    alias ( "displaySetVisible", display_setVisible )
    alias ( "displaySetXY", display_move )
    alias ( "freezeSprite", sprite_freeze )
    alias ( "getBkColorC", getBkColor )
    alias ( "getExtraC", sprite_getExtra )
    alias ( "getExtraUID", sprite_getUID )
    alias ( "getHitTestC", sprite_getHitTest )
    alias ( "getLayerC", findLayer )
    alias ( "getObjClass", sprite_getClass )
    alias ( "getObjCount", scene_getSize )
    alias ( "getObjName", sprite_getName )
    alias ( "getObjType", sprite_getObjType )
    alias ( "getPlayerC", getPlayerID )
    alias ( "getProtoC", proto_get )
    alias ( "getSpriteCount", scene_getSize )
    alias ( "getSpriteVars", sprite_getVars )
    alias ( "getTriggerKey", sprite_getTriggerKey )
    alias ( "hideSprite", sprite_hide )
    alias ( "isDead", sprite_isDead )
    alias ( "isHidden", sprite_isHidden )
    alias ( "isMonster", sprite_isMonster )
    alias ( "isPlayerThere", sprite_isPlayerThere )
    alias ( "isVisible", sprite_isVisible )
    alias ( "killSprite", sprite_kill )
    alias ( "land", sprite_land )
    alias ( "mapSprite", sprite_map )
    alias ( "markSpriteAsGoal", sprite_markAsGoal )
    alias ( "moveSprite", sprite_move )
    alias ( "moveSpriteBy", sprite_moveBy )
    alias ( "moveSpriteTo", sprite_moveTo )
    alias ( "removeDisplayById", display_remove )
    alias ( "setAim", sprite_setAim )
    alias ( "setBkColorC", setBkColor )
    alias ( "setImage", sprite_setImage )
    alias ( "setState", sprite_setState )
    alias ( "setTriggerKey", sprite_setTriggerKey )
    alias ( "showSprite", sprite_show )
    alias ( "spawn", sprite_spawn )
    alias ( "stopAnimation", sprite_stopAnimation )
    alias ( "testFlags", sprite_testFlags )
    alias ( "triggerHitState", sprite_triggerHitState )
    alias ( "tryAnimation", sprite_tryAnimation )
    alias ( "tryPath", sprite_tryPath )
    alias ( "unFreezeSprite", sprite_unFreeze )
    alias ( "unMapSprite", sprite_unMap )
    { NULL, 0 }
};
