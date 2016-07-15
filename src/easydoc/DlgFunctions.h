/*
    easyDoc - documentation utility for LGCK Builder
    Copyright (C) 2009, 2010  Francois Blanchette

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

#ifndef DLGFUNCTIONS_H
#define DLGFUNCTIONS_H

#include <QtGui/QDialog>
#include <QModelIndex>
#include <QTreeWidgetItem>
#include "Database.h"

namespace Ui {
    class CDlgFunctions;
}

class CDlgFunctions : public QDialog {
    Q_OBJECT
public:
    CDlgFunctions(QWidget *parent = 0);
    ~CDlgFunctions();

    void init(CDatabase *db);

protected:
    void changeEvent(QEvent *e);
    CDatabase *m_db;
    void format (QTreeWidgetItem * item, Function & fn);
    void initFn (Function & fn);  

    enum {
        ICON_BLUE,
        ICON_CYAN,
        ICON_GREEN,
        ICON_GREY,
        ICON_RED,
        ICON_YELLOW,
        ICON_NA,
        ICON_CPP,
        ICON_LUA,
        ICON_COUNT,
    };

    QIcon m_icons[ICON_COUNT];

private:
    Ui::CDlgFunctions *m_ui;

private slots:
    void on_treeFn_doubleClicked(QModelIndex index);
    void on_btnDelete_clicked();
    void on_btnAdd_clicked();

};

#endif // DLGFUNCTIONS_H
