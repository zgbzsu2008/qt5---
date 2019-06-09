#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dockwindows.h"

class DockWindows : public QMainWindow
{
    Q_OBJECT

public:
    DockWindows(QWidget *parent = Q_NULLPTR);

private:
    Ui::DockWindowsClass ui;
};
