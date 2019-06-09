#pragma once
#pragma execution_character_set("utf-8")

#include <qtoolbox.h>
#include <qtoolbutton.h>

class Drawer : public QToolBox
{
    Q_OBJECT

public:
    Drawer(QWidget *parent = nullptr, Qt::WindowFlags f=0);

private:
    QToolButton *toolBtns[30];

};
