#include "dialog.h"

constexpr double PI = 3.1415926;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    connect(ui.countBtn, &QPushButton::clicked, this, &Dialog::showArea);
    connect(ui.radiusLineEdit, &QLineEdit::textChanged, this, &Dialog::showArea);
}

void Dialog::showArea()
{
    bool ok;
    QString str;
    QString result = ui.radiusLineEdit->text();
    double value = result.toDouble(&ok);
    double area = value * value * PI;
    ui.areaLineEdit->setText(str.setNum(area));
}
