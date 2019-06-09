#include "mywidget.h"

#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>


#include <qlayout.h>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    resize(320, 240);
    setWindowTitle("Top-level widget");

    QPushButton *btn = new QPushButton("Press me", this);
    btn->move(40,30);
    connect(btn, &QPushButton::clicked, qApp, &QApplication::quit);

    QLabel *lable = new QLabel("Name:");
    QLineEdit *lineEdit = new QLineEdit();

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(lable);
    layout->addWidget(lineEdit);

    setLayout(layout);
}
