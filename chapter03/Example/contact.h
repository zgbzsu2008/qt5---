#pragma once
#pragma execution_character_set("utf-8")

#include <qlabel.h>
#include <qgridlayout.h>
#include <qlineedit.h>
#include <qcheckbox.h>

class Contact : public QWidget
{
    Q_OBJECT
public:
    Contact(QWidget *parent = nullptr);

private:
    QLabel *emailLabel;
    QLineEdit *emaiLineEdit;
    QLabel *addrLabel;
    QLineEdit *addrLineEdit;
    QLabel *codeLabel;
    QLineEdit *codeLineEdit;
    QLabel *phoneLabel;
    QLineEdit *phoneLineEdit;
    QCheckBox *phoneCheckBook;
    QLabel *proPhoneLabel;
    QLineEdit *proPhoneLineEdit;
    QGridLayout *mainLayout;
};