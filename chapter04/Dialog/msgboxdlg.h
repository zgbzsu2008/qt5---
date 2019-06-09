#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qgridlayout.h>
#include <qlabel.h>

class MsgBoxDlg : public QDialog
{
    Q_OBJECT
public:
    MsgBoxDlg(QWidget *parent = nullptr);

private slots:
    void showQuestionMsg();
    void showInformationMsg();
    void showWarningMsg();
    void showCriticalMsg();
    void showAboutMsg();
    void showAboutQtMsg();

private:
    QLabel *label;

    QPushButton *questionBtn;
    QPushButton *informationBtn;
    QPushButton *warningBtn;
    QPushButton *criticalBtn;
    QPushButton *aboutBtn;
    QPushButton *aboutQtBtn;

    QGridLayout *mainLayout;
};