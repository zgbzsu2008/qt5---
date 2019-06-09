#include "stackdlg.h"

#include <qlayout.h>

StackDlg::StackDlg(QWidget *parent)
    : QDialog(parent)
{
    // ui.setupUi(this);
    setWindowTitle("StackWidget");
    list = new QListWidget(this);
    list->insertItem(0, "Window1");
    list->insertItem(1, "Window2");
    list->insertItem(2, "Window3");

    label1 = new QLabel("WindowTest1");
    label2 = new QLabel("WindowTest2");
    label3 = new QLabel("WindowTest3");

    stack = new QStackedWidget(this);
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setMargin(5);
    layout->setSpacing(5);
    layout->addWidget(list);
    layout->addWidget(stack, 0, Qt::AlignHCenter);
    layout->setStretchFactor(list, 1);
    layout->setStretchFactor(stack, 3);
    
    connect(list, &QListWidget::currentRowChanged, stack, &QStackedWidget::setCurrentIndex);
}
