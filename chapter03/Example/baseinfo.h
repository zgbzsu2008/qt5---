#pragma once
#pragma execution_character_set("utf-8")

#include <qwidget.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qtextedit.h>
#include <qgridlayout.h>
#include <qpushbutton.h>

class BaseInfo : public QWidget
{
    Q_OBJECT

public:
    BaseInfo(QWidget *parent = nullptr);

private:
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
};