#include "contact.h"

Contact::Contact(QWidget *parent)
    : QWidget(parent)
{
    emailLabel = new QLabel("�������䣺");
    emaiLineEdit = new QLineEdit;

    addrLabel = new QLabel("��ϵ��ַ��");
    addrLineEdit = new QLineEdit;

    codeLabel = new QLabel("�������룺");
    codeLineEdit = new QLineEdit;

    phoneLabel = new QLabel("�ֻ����룺");
    phoneLineEdit = new QLineEdit;
    phoneCheckBook = new QCheckBox("��������");

    proPhoneLabel = new QLabel("�칫�绰");
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