#pragma once

#include "ui_stackdlg.h"

#include <QtWidgets/QDialog>
#include <qlabel.h>
#include <qlistwidget.h>
#include <qstackedwidget.h>

class StackDlg : public QDialog
{
    Q_OBJECT

public:
    StackDlg(QWidget *parent = Q_NULLPTR);

private:
    Ui::StackDlgClass ui;
    QListWidget *list;
    QStackedWidget *stack;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
};
