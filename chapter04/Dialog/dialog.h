#pragma once
#pragma execution_character_set("utf-8")

#include "ui_dialog.h"

#include <QtWidgets/QDialog>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qgridlayout.h>

#include "inputdlg.h"
#include "msgboxdlg.h"

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = Q_NULLPTR);

private slots:
    void showFile();
    void showColor();
    void showFont();
    void showInputDlg();
    void showMsgDlg();
    void showCustomDlg();

private:
    Ui::DialogClass ui;

    QGridLayout *mainLayout;
    QPushButton *fileBtn;
    QLineEdit *fileLineEdit;

    QPushButton *colorBtn;
    QFrame *colorFrame;

    QPushButton *fontBtn;
    QLineEdit *fontLineEdit;

    QPushButton *inputBtn;
    InputDlg *inputDlg;

    QPushButton *msgBtn;
    MsgBoxDlg *msgDlg;

    QPushButton *customBtn;
    QLabel *label;
};
