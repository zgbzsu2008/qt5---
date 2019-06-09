#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_splitter.h"

class Splitter : public QMainWindow
{
    Q_OBJECT

public:
    Splitter(QWidget *parent = Q_NULLPTR);

private:
    Ui::SplitterClass ui;
};
