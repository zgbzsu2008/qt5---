#include "content.h"

Content::Content(QWidget *parent)
    : QFrame(parent)
{
    alterBtn = new QPushButton("ÐÞ¸Ä");
    closeBtn = new QPushButton("¹Ø±Õ");
    baseInfo = new BaseInfo;
    contact = new Contact;
    detail = new Detail;

    stack = new QStackedWidget(this);
    stack->setFrameStyle(QFrame::Panel | QFrame::Raised);
    stack->addWidget(baseInfo);
    stack->addWidget(contact);
    stack->addWidget(detail);

    // layout
    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->addStretch(1);
    btnLayout->addWidget(alterBtn);
    btnLayout->addWidget(closeBtn);

    QVBoxLayout *rightLayout = new QVBoxLayout(this);
    rightLayout->setMargin(10);
    rightLayout->setSpacing(16);
    rightLayout->addWidget(stack);
    rightLayout->addLayout(btnLayout);
}