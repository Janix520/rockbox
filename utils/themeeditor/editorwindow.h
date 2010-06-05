/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2010 Robert Bieber
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#include <QMainWindow>

#include "parsetreemodel.h"
#include "skinhighlighter.h"
#include "skindocument.h"

namespace Ui {
    class EditorWindow;
}

class EditorWindow : public QMainWindow {
    Q_OBJECT
public:
    EditorWindow(QWidget *parent = 0);
    ~EditorWindow();

protected:
    virtual void closeEvent(QCloseEvent* event);

private slots:
    void showPanel();
    void newTab();
    void shiftTab(int index);
    void closeTab(int index);

private:
    /* Setup functions */
    void loadSettings();
    void saveSettings();
    void setupUI();
    void setupMenus();

    Ui::EditorWindow *ui;
};

#endif // EDITORWINDOW_H
