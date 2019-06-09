#pragma once
#pragma execution_character_set("utf-8")

#include <qlabel.h>
#include <qgridlayout.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qtextedit.h>

class Detail : public QWidget
{
    Q_OBJECT
public:
    Detail(QWidget *parent = nullptr);

private:
    QLabel *nationalLabel;
    QComboBox *nationalComboBox;
    QLabel *provinceLabel;
    QComboBox *provinceComboBox;
    QLabel *cityLabel;
    QLineEdit *cityLineEdit;
    QLabel *introductLabel;
    QTextEdit *introductTextEdit;
    QGridLayout *mainLayout;
};