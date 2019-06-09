#include "drawer.h"

#include <qgroupbox.h>
#include <qlayout.h>
#include <qgridlayout.h>

Drawer::Drawer(QWidget *parent, Qt::WindowFlags f)
    : QToolBox(parent, f)
{
    setWindowTitle("QQ");
    for (int i = 0; i < 30; ++i) {
        auto &btn = toolBtns[i];
        btn = new QToolButton;
        btn->setText(QString("name[%1]").arg(i));
        auto pixmap = QPixmap("312.png");
        btn->setIcon(pixmap);
        btn->setIconSize(pixmap.size());
        btn->setAutoRaise(true);
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    }

    QGroupBox *groupBox[3];
    QVBoxLayout *boxLayout[3];

    for (int i = 0; i < 3; ++i) {
        groupBox[i] = new QGroupBox;
        boxLayout[i] = new QVBoxLayout(groupBox[i]);
        boxLayout[i]->setAlignment(Qt::AlignTop);
    }

    for (int i = 0; i < 15; ++i) {
        boxLayout[0]->addWidget(toolBtns[i]);
    }
    boxLayout[0]->addStretch();

    for (int i = 15; i < 27; ++i) {
        boxLayout[1]->addWidget(toolBtns[i]);
    }

    for (int i = 27; i < 29; ++i) {
        boxLayout[2]->addWidget(toolBtns[i]);
    }

    this->addItem(groupBox[0], "我的好友");
    this->addItem(groupBox[1], "陌生人");
    this->addItem(groupBox[2], "黑名单");
}
