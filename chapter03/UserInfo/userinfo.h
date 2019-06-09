#pragma once
#pragma execution_character_set("utf-8")

#include "ui_userinfo.h"

#include <QtWidgets/QDialog>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qtextedit.h>
#include <qgridlayout.h>
#include <qpushbutton.h>

class UserInfo : public QDialog
{
    Q_OBJECT

public:
    UserInfo(QWidget *parent = Q_NULLPTR);

private:
    Ui::UserInfoClass ui;

    QLabel *userNameLabel;
    QLabel *nameLabel;
    QLabel *sexLabel;
    QLabel *departmentLabel;
    QLabel *ageLabel;
    QLabel *otherLabel;
    QLineEdit *userNameLineEdit;
    QLineEdit *nameLineEdit;
    QComboBox *sexComboBox;
    QTextEdit *departmentTextEdit;
    QLineEdit *ageLineEdit;
    QGridLayout *leftLayout;

    QLabel *headLabel;
    QLabel *headIconLabel;
    QPushButton *updateHeadBtn;
    QHBoxLayout *topRightLayout;

    QLabel *introductionLabel;
    QTextEdit *introductionTextEdit;
    QVBoxLayout *rightLayout;

    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QHBoxLayout *buttomLayout;
};
