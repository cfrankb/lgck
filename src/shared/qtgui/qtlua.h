/*
    LGCK Builder Runtime
    Copyright (C) 1999, 2016  Francois Blanchette

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

luaFn ( bindWidget )
luaFn ( cwbtncolor_color )
luaFn ( cwbtncolor_delete )
luaFn ( cwbtncolor_new )
luaFn ( cwbtncolor_setColor )
luaFn ( cwizscript_accept )
luaFn ( cwizscript_addPage )
luaFn ( cwizscript_back )
luaFn ( cwizscript_buttonText )
luaFn ( cwizscript_currentId )
luaFn ( cwizscript_delete )
luaFn ( cwizscript_initComboBox )
luaFn ( cwizscript_new )
luaFn ( cwizscript_next )
luaFn ( cwizscript_reject )
luaFn ( cwizscript_removePage )
luaFn ( cwizscript_restart )
luaFn ( cwizscript_setButton )
luaFn ( cwizscript_setButtonText )
luaFn ( cwizscript_setDefaultProperty )
luaFn ( cwizscript_setField )
luaFn ( cwizscript_setOption )
luaFn ( cwizscript_setPage )
luaFn ( cwizscript_setSideWidget )
luaFn ( cwizscript_setStartId )
luaFn ( cwizscript_setSubTitleFormat )
luaFn ( cwizscript_setTitleFormat )
luaFn ( cwizscript_setVisible )
luaFn ( cwizscript_setWindowTitle )
luaFn ( cwizscript_setWizardStyle )
luaFn ( cwizscript_startId )
luaFn ( cwizscript_subTitleFormat )
luaFn ( cwizscript_testOption )
luaFn ( cwizscript_titleFormat )
luaFn ( cwizscript_validateCurrentPage )
luaFn ( cwizscript_wizardStyle )
luaFn ( findWidget )
luaFn ( qbuttongroup_addButton )
luaFn ( qbuttongroup_delete )
luaFn ( qbuttongroup_exclusive )
luaFn ( qbuttongroup_id )
luaFn ( qbuttongroup_new )
luaFn ( qbuttongroup_removeButton )
luaFn ( qbuttongroup_setExclusive )
luaFn ( qbuttongroup_setId )
luaFn ( qcheckbox_autoExclusive )
luaFn ( qcheckbox_checkState )
luaFn ( qcheckbox_delete )
luaFn ( qcheckbox_isCheckable )
luaFn ( qcheckbox_isChecked )
luaFn ( qcheckbox_isTristate )
luaFn ( qcheckbox_new )
luaFn ( qcheckbox_setAutoExclusive )
luaFn ( qcheckbox_setCheckable )
luaFn ( qcheckbox_setChecked )
luaFn ( qcheckbox_setText )
luaFn ( qcheckbox_setTristate )
luaFn ( qcheckbox_text )
luaFn ( qcombobox_addItem )
luaFn ( qcombobox_count )
luaFn ( qcombobox_currentIndex )
luaFn ( qcombobox_currentText )
luaFn ( qcombobox_delete )
luaFn ( qcombobox_duplicatesEnabled )
luaFn ( qcombobox_hasFrame )
luaFn ( qcombobox_hidePopup )
luaFn ( qcombobox_insertItem )
luaFn ( qcombobox_insertPolicy )
luaFn ( qcombobox_insertSeparator )
luaFn ( qcombobox_isEditable )
luaFn ( qcombobox_itemText )
luaFn ( qcombobox_maxCount )
luaFn ( qcombobox_maxVisibleItems )
luaFn ( qcombobox_minimumContentsLength )
luaFn ( qcombobox_modelColumn )
luaFn ( qcombobox_new )
luaFn ( qcombobox_removeItem )
luaFn ( qcombobox_setCurrentIndex )
luaFn ( qcombobox_setDuplicatesEnabled )
luaFn ( qcombobox_setFrame )
luaFn ( qgridlayout_addWidget )
luaFn ( qgridlayout_delete )
luaFn ( qgridlayout_new )
luaFn ( qlabel_alignment )
luaFn ( qlabel_clear )
luaFn ( qlabel_delete )
luaFn ( qlabel_hasScaledContents )
luaFn ( qlabel_hasSelectedText )
luaFn ( qlabel_indent )
luaFn ( qlabel_margin )
luaFn ( qlabel_new )
luaFn ( qlabel_openExternalLinks )
luaFn ( qlabel_selectedText )
luaFn ( qlabel_selectionStart )
luaFn ( qlabel_setAlignment )
luaFn ( qlabel_setBuddy )
luaFn ( qlabel_setFrameStyle )
luaFn ( qlabel_setIndent )
luaFn ( qlabel_setMargin )
luaFn ( qlabel_setNum )
luaFn ( qlabel_setOpenExternalLinks )
luaFn ( qlabel_setScaledContents )
luaFn ( qlabel_setText )
luaFn ( qlabel_setTextFormat )
luaFn ( qlabel_setTextInteractionFlags )
luaFn ( qlabel_setWordWrap )
luaFn ( qlabel_text )
luaFn ( qlabel_textFormat )
luaFn ( qlabel_textInteractionFlags )
luaFn ( qlabel_wordWrap )
luaFn ( qlineedit_alignment )
luaFn ( qlineedit_backspace )
luaFn ( qlineedit_copy )
luaFn ( qlineedit_cursorBackward )
luaFn ( qlineedit_cursorForward )
luaFn ( qlineedit_cursorMoveStyle )
luaFn ( qlineedit_cursorPosition )
luaFn ( qlineedit_cut )
luaFn ( qlineedit_delete )
luaFn ( qlineedit_deselect )
luaFn ( qlineedit_displayText )
luaFn ( qlineedit_end )
luaFn ( qlineedit_hasSelectedText )
luaFn ( qlineedit_home )
luaFn ( qlineedit_inputMask )
luaFn ( qlineedit_insert )
luaFn ( qlineedit_isModified )
luaFn ( qlineedit_isReadOnly )
luaFn ( qlineedit_isRedoAvailable )
luaFn ( qlineedit_isUndoAvailable )
luaFn ( qlineedit_maxLength )
luaFn ( qlineedit_new )
luaFn ( qlineedit_paste )
luaFn ( qlineedit_placeholderText )
luaFn ( qlineedit_redo )
luaFn ( qlineedit_selectAll )
luaFn ( qlineedit_setAlignment )
luaFn ( qlineedit_setCursorMoveStyle )
luaFn ( qlineedit_setCursorPosition )
luaFn ( qlineedit_setInputMask )
luaFn ( qlineedit_setMaxLength )
luaFn ( qlineedit_setModified )
luaFn ( qlineedit_setPlaceholderText )
luaFn ( qlineedit_setReadOnly )
luaFn ( qlineedit_setSelection )
luaFn ( qlineedit_setText )
luaFn ( qlineedit_setTextMargins )
luaFn ( qlineedit_text )
luaFn ( qlineedit_undo )
luaFn ( qlistwidget_addItem )
luaFn ( qlistwidget_count )
luaFn ( qlistwidget_currentRow )
luaFn ( qlistwidget_delete )
luaFn ( qlistwidget_insertItem )
luaFn ( qlistwidget_isSortingEnabled )
luaFn ( qlistwidget_new )
luaFn ( qlistwidget_setCurrentRow )
luaFn ( qlistwidget_setSortingEnabled )
luaFn ( qlistwidget_sortItems )
luaFn ( qradiobutton_autoExclusive )
luaFn ( qradiobutton_delete )
luaFn ( qradiobutton_isCheckable )
luaFn ( qradiobutton_isChecked )
luaFn ( qradiobutton_new )
luaFn ( qradiobutton_setAutoExclusive )
luaFn ( qradiobutton_setCheckable )
luaFn ( qradiobutton_setChecked )
luaFn ( qradiobutton_setText )
luaFn ( qradiobutton_text )
luaFn ( qslider_delete )
luaFn ( qslider_hasTracking )
luaFn ( qslider_invertedAppearance )
luaFn ( qslider_invertedControls )
luaFn ( qslider_isSliderDown )
luaFn ( qslider_maximum )
luaFn ( qslider_minimum )
luaFn ( qslider_new )
luaFn ( qslider_orientation )
luaFn ( qslider_pageStep )
luaFn ( qslider_setInvertedAppearance )
luaFn ( qslider_setInvertedControls )
luaFn ( qslider_setMaximum )
luaFn ( qslider_setMinimum )
luaFn ( qslider_setPageStep )
luaFn ( qslider_setRange )
luaFn ( qslider_setSingleStep )
luaFn ( qslider_setSliderDown )
luaFn ( qslider_setSliderPosition )
luaFn ( qslider_setTickInterval )
luaFn ( qslider_setTickPosition )
luaFn ( qslider_setTracking )
luaFn ( qslider_singleStep )
luaFn ( qslider_sliderPosition )
luaFn ( qslider_tickInterval )
luaFn ( qslider_tickPosition )
luaFn ( qslider_triggerAction )
luaFn ( qslider_value )
luaFn ( qspinbox_cleanText )
luaFn ( qspinbox_delete )
luaFn ( qspinbox_maximum )
luaFn ( qspinbox_minimum )
luaFn ( qspinbox_new )
luaFn ( qspinbox_prefix )
luaFn ( qspinbox_setMaximum )
luaFn ( qspinbox_setMinimum )
luaFn ( qspinbox_setPrefix )
luaFn ( qspinbox_setRange )
luaFn ( qspinbox_setSingleStep )
luaFn ( qspinbox_setSuffix )
luaFn ( qspinbox_setValue )
luaFn ( qspinbox_singleStep )
luaFn ( qspinbox_suffix )
luaFn ( qspinbox_value )
luaFn ( qvboxlayout_addWidget )
luaFn ( qvboxlayout_delete )
luaFn ( qvboxlayout_new )
luaFn ( qwizard_accept )
luaFn ( qwizard_addPage )
luaFn ( qwizard_back )
luaFn ( qwizard_buttonText )
luaFn ( qwizard_currentId )
luaFn ( qwizard_delete )
luaFn ( qwizard_new )
luaFn ( qwizard_next )
luaFn ( qwizard_reject )
luaFn ( qwizard_removePage )
luaFn ( qwizard_restart )
luaFn ( qwizard_setButton )
luaFn ( qwizard_setButtonText )
luaFn ( qwizard_setDefaultProperty )
luaFn ( qwizard_setField )
luaFn ( qwizard_setOption )
luaFn ( qwizard_setPage )
luaFn ( qwizard_setSideWidget )
luaFn ( qwizard_setStartId )
luaFn ( qwizard_setSubTitleFormat )
luaFn ( qwizard_setTitleFormat )
luaFn ( qwizard_setVisible )
luaFn ( qwizard_setWindowTitle )
luaFn ( qwizard_setWizardStyle )
luaFn ( qwizard_startId )
luaFn ( qwizard_subTitleFormat )
luaFn ( qwizard_testOption )
luaFn ( qwizard_titleFormat )
luaFn ( qwizard_validateCurrentPage )
luaFn ( qwizard_wizardStyle )
luaFn ( qwizardpage_delete )
luaFn ( qwizardpage_new )
luaFn ( qwizardpage_setLayout )
luaFn ( qwizardpage_setSubTitle )
luaFn ( qwizardpage_setTitle )
luaFn ( rgb2tuple )

static FUNCTION exports [] = {
    fn ( bindWidget )
    fn ( cwbtncolor_color )
    fn ( cwbtncolor_delete )
    fn ( cwbtncolor_new )
    fn ( cwbtncolor_setColor )
    fn ( cwizscript_accept )
    fn ( cwizscript_addPage )
    fn ( cwizscript_back )
    fn ( cwizscript_buttonText )
    fn ( cwizscript_currentId )
    fn ( cwizscript_delete )
    fn ( cwizscript_initComboBox )
    fn ( cwizscript_new )
    fn ( cwizscript_next )
    fn ( cwizscript_reject )
    fn ( cwizscript_removePage )
    fn ( cwizscript_restart )
    fn ( cwizscript_setButton )
    fn ( cwizscript_setButtonText )
    fn ( cwizscript_setDefaultProperty )
    fn ( cwizscript_setField )
    fn ( cwizscript_setOption )
    fn ( cwizscript_setPage )
    fn ( cwizscript_setSideWidget )
    fn ( cwizscript_setStartId )
    fn ( cwizscript_setSubTitleFormat )
    fn ( cwizscript_setTitleFormat )
    fn ( cwizscript_setVisible )
    fn ( cwizscript_setWindowTitle )
    fn ( cwizscript_setWizardStyle )
    fn ( cwizscript_startId )
    fn ( cwizscript_subTitleFormat )
    fn ( cwizscript_testOption )
    fn ( cwizscript_titleFormat )
    fn ( cwizscript_validateCurrentPage )
    fn ( cwizscript_wizardStyle )
    fn ( findWidget )
    fn ( qbuttongroup_addButton )
    fn ( qbuttongroup_delete )
    fn ( qbuttongroup_exclusive )
    fn ( qbuttongroup_id )
    fn ( qbuttongroup_new )
    fn ( qbuttongroup_removeButton )
    fn ( qbuttongroup_setExclusive )
    fn ( qbuttongroup_setId )
    fn ( qcheckbox_autoExclusive )
    fn ( qcheckbox_checkState )
    fn ( qcheckbox_delete )
    fn ( qcheckbox_isCheckable )
    fn ( qcheckbox_isChecked )
    fn ( qcheckbox_isTristate )
    fn ( qcheckbox_new )
    fn ( qcheckbox_setAutoExclusive )
    fn ( qcheckbox_setCheckable )
    fn ( qcheckbox_setChecked )
    fn ( qcheckbox_setText )
    fn ( qcheckbox_setTristate )
    fn ( qcheckbox_text )
    fn ( qcombobox_addItem )
    fn ( qcombobox_count )
    fn ( qcombobox_currentIndex )
    fn ( qcombobox_currentText )
    fn ( qcombobox_delete )
    fn ( qcombobox_duplicatesEnabled )
    fn ( qcombobox_hasFrame )
    fn ( qcombobox_hidePopup )
    fn ( qcombobox_insertItem )
    fn ( qcombobox_insertPolicy )
    fn ( qcombobox_insertSeparator )
    fn ( qcombobox_isEditable )
    fn ( qcombobox_itemText )
    fn ( qcombobox_maxCount )
    fn ( qcombobox_maxVisibleItems )
    fn ( qcombobox_minimumContentsLength )
    fn ( qcombobox_modelColumn )
    fn ( qcombobox_new )
    fn ( qcombobox_removeItem )
    fn ( qcombobox_setCurrentIndex )
    fn ( qcombobox_setDuplicatesEnabled )
    fn ( qcombobox_setFrame )
    fn ( qgridlayout_addWidget )
    fn ( qgridlayout_delete )
    fn ( qgridlayout_new )
    fn ( qlabel_alignment )
    fn ( qlabel_clear )
    fn ( qlabel_delete )
    fn ( qlabel_hasScaledContents )
    fn ( qlabel_hasSelectedText )
    fn ( qlabel_indent )
    fn ( qlabel_margin )
    fn ( qlabel_new )
    fn ( qlabel_openExternalLinks )
    fn ( qlabel_selectedText )
    fn ( qlabel_selectionStart )
    fn ( qlabel_setAlignment )
    fn ( qlabel_setBuddy )
    fn ( qlabel_setFrameStyle )
    fn ( qlabel_setIndent )
    fn ( qlabel_setMargin )
    fn ( qlabel_setNum )
    fn ( qlabel_setOpenExternalLinks )
    fn ( qlabel_setScaledContents )
    fn ( qlabel_setText )
    fn ( qlabel_setTextFormat )
    fn ( qlabel_setTextInteractionFlags )
    fn ( qlabel_setWordWrap )
    fn ( qlabel_text )
    fn ( qlabel_textFormat )
    fn ( qlabel_textInteractionFlags )
    fn ( qlabel_wordWrap )
    fn ( qlineedit_alignment )
    fn ( qlineedit_backspace )
    fn ( qlineedit_copy )
    fn ( qlineedit_cursorBackward )
    fn ( qlineedit_cursorForward )
    fn ( qlineedit_cursorMoveStyle )
    fn ( qlineedit_cursorPosition )
    fn ( qlineedit_cut )
    fn ( qlineedit_delete )
    fn ( qlineedit_deselect )
    fn ( qlineedit_displayText )
    fn ( qlineedit_end )
    fn ( qlineedit_hasSelectedText )
    fn ( qlineedit_home )
    fn ( qlineedit_inputMask )
    fn ( qlineedit_insert )
    fn ( qlineedit_isModified )
    fn ( qlineedit_isReadOnly )
    fn ( qlineedit_isRedoAvailable )
    fn ( qlineedit_isUndoAvailable )
    fn ( qlineedit_maxLength )
    fn ( qlineedit_new )
    fn ( qlineedit_paste )
    fn ( qlineedit_placeholderText )
    fn ( qlineedit_redo )
    fn ( qlineedit_selectAll )
    fn ( qlineedit_setAlignment )
    fn ( qlineedit_setCursorMoveStyle )
    fn ( qlineedit_setCursorPosition )
    fn ( qlineedit_setInputMask )
    fn ( qlineedit_setMaxLength )
    fn ( qlineedit_setModified )
    fn ( qlineedit_setPlaceholderText )
    fn ( qlineedit_setReadOnly )
    fn ( qlineedit_setSelection )
    fn ( qlineedit_setText )
    fn ( qlineedit_setTextMargins )
    fn ( qlineedit_text )
    fn ( qlineedit_undo )
    fn ( qlistwidget_addItem )
    fn ( qlistwidget_count )
    fn ( qlistwidget_currentRow )
    fn ( qlistwidget_delete )
    fn ( qlistwidget_insertItem )
    fn ( qlistwidget_isSortingEnabled )
    fn ( qlistwidget_new )
    fn ( qlistwidget_setCurrentRow )
    fn ( qlistwidget_setSortingEnabled )
    fn ( qlistwidget_sortItems )
    fn ( qradiobutton_autoExclusive )
    fn ( qradiobutton_delete )
    fn ( qradiobutton_isCheckable )
    fn ( qradiobutton_isChecked )
    fn ( qradiobutton_new )
    fn ( qradiobutton_setAutoExclusive )
    fn ( qradiobutton_setCheckable )
    fn ( qradiobutton_setChecked )
    fn ( qradiobutton_setText )
    fn ( qradiobutton_text )
    fn ( qslider_delete )
    fn ( qslider_hasTracking )
    fn ( qslider_invertedAppearance )
    fn ( qslider_invertedControls )
    fn ( qslider_isSliderDown )
    fn ( qslider_maximum )
    fn ( qslider_minimum )
    fn ( qslider_new )
    fn ( qslider_orientation )
    fn ( qslider_pageStep )
    fn ( qslider_setInvertedAppearance )
    fn ( qslider_setInvertedControls )
    fn ( qslider_setMaximum )
    fn ( qslider_setMinimum )
    fn ( qslider_setPageStep )
    fn ( qslider_setRange )
    fn ( qslider_setSingleStep )
    fn ( qslider_setSliderDown )
    fn ( qslider_setSliderPosition )
    fn ( qslider_setTickInterval )
    fn ( qslider_setTickPosition )
    fn ( qslider_setTracking )
    fn ( qslider_singleStep )
    fn ( qslider_sliderPosition )
    fn ( qslider_tickInterval )
    fn ( qslider_tickPosition )
    fn ( qslider_triggerAction )
    fn ( qslider_value )
    fn ( qspinbox_cleanText )
    fn ( qspinbox_delete )
    fn ( qspinbox_maximum )
    fn ( qspinbox_minimum )
    fn ( qspinbox_new )
    fn ( qspinbox_prefix )
    fn ( qspinbox_setMaximum )
    fn ( qspinbox_setMinimum )
    fn ( qspinbox_setPrefix )
    fn ( qspinbox_setRange )
    fn ( qspinbox_setSingleStep )
    fn ( qspinbox_setSuffix )
    fn ( qspinbox_setValue )
    fn ( qspinbox_singleStep )
    fn ( qspinbox_suffix )
    fn ( qspinbox_value )
    fn ( qvboxlayout_addWidget )
    fn ( qvboxlayout_delete )
    fn ( qvboxlayout_new )
    fn ( qwizard_accept )
    fn ( qwizard_addPage )
    fn ( qwizard_back )
    fn ( qwizard_buttonText )
    fn ( qwizard_currentId )
    fn ( qwizard_delete )
    fn ( qwizard_new )
    fn ( qwizard_next )
    fn ( qwizard_reject )
    fn ( qwizard_removePage )
    fn ( qwizard_restart )
    fn ( qwizard_setButton )
    fn ( qwizard_setButtonText )
    fn ( qwizard_setDefaultProperty )
    fn ( qwizard_setField )
    fn ( qwizard_setOption )
    fn ( qwizard_setPage )
    fn ( qwizard_setSideWidget )
    fn ( qwizard_setStartId )
    fn ( qwizard_setSubTitleFormat )
    fn ( qwizard_setTitleFormat )
    fn ( qwizard_setVisible )
    fn ( qwizard_setWindowTitle )
    fn ( qwizard_setWizardStyle )
    fn ( qwizard_startId )
    fn ( qwizard_subTitleFormat )
    fn ( qwizard_testOption )
    fn ( qwizard_titleFormat )
    fn ( qwizard_validateCurrentPage )
    fn ( qwizard_wizardStyle )
    fn ( qwizardpage_delete )
    fn ( qwizardpage_new )
    fn ( qwizardpage_setLayout )
    fn ( qwizardpage_setSubTitle )
    fn ( qwizardpage_setTitle )
    fn ( rgb2tuple )
    { nullptr, 0 }
};
