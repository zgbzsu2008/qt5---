#include "detail.h"

Detail::Detail(QWidget *parent)
    : QWidget(parent)
{
    nationalLabel = new QLabel("国家/地址：");
    nationalComboBox = new QComboBox;
    nationalComboBox->insertItem(0, "中国");
    nationalComboBox->insertItem(1, "美国");
    nationalComboBox->insertItem(2, "英国");

    provinceLabel = new QLabel("省份");
    provinceComboBox = new QComboBox;
    provinceComboBox->insertItem(0, "江苏省");
    provinceComboBox->insertItem(1, "山东省");
    provinceComboBox->insertItem(2, "浙江省");

    cityLabel = new QLabel("城市：");
    cityLineEdit = new QLineEdit;

    introductLabel = new QLabel("个人说明：");
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