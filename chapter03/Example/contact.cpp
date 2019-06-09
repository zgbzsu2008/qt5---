#include "contact.h"

Contact::Contact(QWidget *parent)
    : QWidget(parent)
{
    emailLabel = new QLabel("电子邮箱：");
    emaiLineEdit = new QLineEdit;

    addrLabel = new QLabel("联系地址：");
    addrLineEdit = new QLineEdit;

    codeLabel = new QLabel("邮政编码：");
    codeLineEdit = new QLineEdit;

    phoneLabel = new QLabel("手机号码：");
    phoneLineEdit = new QLineEdit;
    phoneCheckBook = new QCheckBox("接收留言");

    proPhoneLabel = new QLabel("办公电话");
    proPhoneLineEdit = new QLineEdit;

    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    mainLayout->addWidget(emailLabel, 0, 0);
    mainLayout->addWidget(emaiLineEdit, 0, 1);

    mainLayout->addWidget(addrLabel, 1, 0);
    mainLayout->addWidget(addrLineEdit, 1, 1);

    mainLayout->addWidget(codeLabel, 2, 0);
    mainLayout->addWidget(codeLineEdit, 2, 1);

    mainLayout->addWidget(phoneLabel, 3, 0);
    mainLayout->addWidget(phoneLineEdit, 3, 1);
    mainLayout->addWidget(phoneCheckBook, 3, 2);

    mainLayout->addWidget(proPhoneLabel, 4, 0);
    mainLayout->addWidget(proPhoneLineEdit, 4, 1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}