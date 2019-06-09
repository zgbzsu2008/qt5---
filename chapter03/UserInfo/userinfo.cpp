#include "userinfo.h"

UserInfo::UserInfo(QWidget *parent)
    : QDialog(parent)
{
    // ui.setupUi(this);
    setWindowTitle("UserInfo");

    // left
    userNameLabel = new QLabel("�û�����");
    userNameLineEdit = new QLineEdit;

    nameLabel = new QLabel("����");
    nameLineEdit = new QLineEdit;

    sexLabel = new QLabel("�Ա�");
    sexComboBox = new QComboBox;
    sexComboBox->addItem("Ů");
    sexComboBox->addItem("��");

    departmentLabel = new QLabel("���ţ�");
    departmentTextEdit = new QTextEdit;

    ageLabel = new QLabel("���䣺");
    ageLineEdit = new QLineEdit;

    otherLabel = new QLabel("��ע��");
    otherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    // left layout
    leftLayout = new QGridLayout;
    leftLayout->addWidget(userNameLabel, 0, 0);
    leftLayout->addWidget(userNameLineEdit, 0, 1);

    leftLayout->addWidget(nameLabel, 1, 0);
    leftLayout->addWidget(nameLineEdit, 1, 1);

    leftLayout->addWidget(sexLabel, 2, 0);
    leftLayout->addWidget(sexComboBox, 2, 1);

    leftLayout->addWidget(departmentLabel, 3, 0);
    leftLayout->addWidget(departmentTextEdit, 3, 1);

    leftLayout->addWidget(ageLabel, 4, 0);
    leftLayout->addWidget(ageLineEdit, 4, 1);

    leftLayout->addWidget(otherLabel, 5, 0, 1, 2);

    leftLayout->setColumnStretch(0, 1);
    leftLayout->setColumnStretch(1, 3);

    // right top
    headLabel = new QLabel("ͷ��");
    headIconLabel = new QLabel;
    QPixmap icon("312.png");
    headIconLabel->setPixmap(icon);
    headIconLabel->resize(icon.width(), icon.height());

    updateHeadBtn = new QPushButton("����");

    topRightLayout = new QHBoxLayout;
    topRightLayout->setSpacing(20);
    topRightLayout->addWidget(headLabel);
    topRightLayout->addWidget(headIconLabel);
    topRightLayout->addWidget(updateHeadBtn);

    // right buttom
    introductionLabel = new QLabel("����˵����");
    introductionTextEdit = new QTextEdit;

    // right layout
    rightLayout = new QVBoxLayout;
    rightLayout->setMargin(10);
    rightLayout->addLayout(topRightLayout);
    rightLayout->addWidget(introductionLabel);
    rightLayout->addWidget(introductionTextEdit);

    // main bottom
    okBtn = new QPushButton("ȷ��");
    cancelBtn = new QPushButton("ȡ��");

    buttomLayout = new QHBoxLayout;
    buttomLayout->addStretch();
    buttomLayout->addWidget(okBtn);
    buttomLayout->addWidget(cancelBtn);

    // main layout
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(leftLayout, 0, 0);
    mainLayout->addLayout(rightLayout, 0, 1);
    mainLayout->addLayout(buttomLayout, 1, 0, 1, 2);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
