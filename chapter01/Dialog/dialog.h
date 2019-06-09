#pragma once

#include "ui_dialog.h"

#include <QtWidgets/QDialog>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = Q_NULLPTR);

private slots:
    void showArea();

private:
    Ui::DialogClass ui;
};
