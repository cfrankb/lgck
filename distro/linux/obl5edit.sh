#!/bin/sh
BASE_DIR=$(dirname "$(readlink -f "$0")")
export LD_LIBRARY_PATH="$BASE_DIR"/lib/:"$BASE_DIR":$LD_LIBRARY_PATH
export QML_IMPORT_PATH="$BASE_DIR"/qml/:$QML_IMPORT_PATH
export QML2_IMPORT_PATH="$BASE_DIR"/qml/:$QML2_IMPORT_PATH
export QT_PLUGIN_PATH="$BASE_DIR"/plugins/:$QT_PLUGIN_PATH
export QTWEBENGINEPROCESS_PATH="$BASE_DIR"/bin/QtWebEngineProcess
export QTDIR="$BASE_DIR"
export QT_QPA_PLATFORM_PLUGIN_PATH="$BASE_DIR"/plugins/platforms:$QT_QPA_PLATFORM_PLUGIN_PATH

# Begin Custom Script (generated by customScript flag)
echo 'I am use custom script!!!'
ls -l
pwd
# End Custom Script

"$BASE_DIR/obl5edit" "$@"