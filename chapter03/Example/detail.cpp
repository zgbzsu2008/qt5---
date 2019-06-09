#include "detail.h"

Detail::Detail(QWidget *parent)
    : QWidget(parent)
{
    nationalLabel = new QLabel("����/��ַ��");
    nationalComboBox = new QComboBox;
    nationalComboBox->insertItem(0, "�й�");
    nationalComboBox->insertItem(1, "����");
    nationalComboBox->insertItem(2, "Ӣ��");

    provinceLabel = new QLabel("ʡ��");
    provinceComboBox = new QComboBox;
    provinceComboBox->insertItem(0, "����ʡ");
    provinceComboBox->insertItem(1, "ɽ��ʡ");
    provinceComboBox->insertItem(2, "�㽭ʡ");

    cityLabel = new QLabel("���У�");
    cityLineEdit = new QLineEdit;

    introductLabel = new QLabel("����˵����");
    introductTextEdit = new QTextEdit;

    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    mainLayout->addWidget(nationalLabel, 0, 0);
    mainLayout->addWidget(nationalComboBox, 0, 1);

    mainLayout->addWidget(provinceLabel, 1, 0);
    mainLayout->addWidget(provinceComboBox, 1, 1);

    mainLayout->addWidget(cityLabel, 2, 0);
    mainLayout->addWidget(cityLineEdit, 2, 1);

    mainLayout->addWidget(introductLabel, 3, 0);
    mainLayout->addWidget(introductTextEdit, 3, 1);
}