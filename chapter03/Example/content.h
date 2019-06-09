#pragma once

#include <qframe.h>
#include <qstackedwidget.h>
#include <qpushbutton.h>

#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

class Content : public QFrame
{
    Q_OBJECT

public:
    Content(QWidget *parent = nullptr);

    QStackedWidget *stack;
    QPushButton *alterBtn;
    QPushButton *closeBtn;

    BaseInfo *baseInfo;
    Contact *contact;
    Detail *detail;
};