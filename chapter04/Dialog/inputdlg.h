#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qgridlayout.h>
#include <qlabel.h>

class InputDlg : public QDialog
{
    Q_OBJECT
public:
    InputDlg(QWidget *parent = nullptr);

private slots:
    void changeName();
    void changeSex();
    void chhangeAge();
    void changeScore();

private:
    QLabel *nameLabel1;
    QLabel *nameLabel2;
    QLabel *sexLabel1;
    QLabel *sexLabel2;
    QLabel *ageLabel1;
    QLabel *ageLabel2;
    QLabel *scoreLabel1;
    QLabel *scoreLabel2;

    QPushButton *nameBtn;
    QPushButton *sexBtn;
    QPushButton *ageBtn;
    QPushButton *scoreBtn;

    QGridLayout *mainLayout;
};