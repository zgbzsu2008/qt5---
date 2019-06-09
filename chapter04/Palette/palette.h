#pragma once

#include <QtWidgets/QDialog>
#include <qcombobox.h>
#include <qlabel.h>
#include <qtextedit.h>
#include <qpushbutton.h>
#include <qlineedit.h>

//#include "ui_palette.h"

class Palette : public QDialog
{
    Q_OBJECT

public:
    Palette(QWidget *parent = Q_NULLPTR);

    void createCtrlFrame();
    void createContentFrame();
    void fillColorList(QComboBox *comboBox);

private slots:
    void showWindow();
    void showWindowText();
    void showButton();
    void showButtonText();
    void showBase();

private:
    // Ui::PaletteClass ui;
    QFrame *ctrlFrame;

    QLabel *windowLabel;
    QComboBox *windowComboBox;

    QLabel *windowTextLabel;
    QComboBox *windowTextComboBox;

    QLabel *buttonLabel;
    QComboBox *buttonComboBox;

    QLabel *buttonTextLabel;
    QComboBox *buttonTextComboBox;

    QLabel *baseLabel;
    QComboBox *baseComboBox;

    QFrame *contentFrame;

    QLabel *label1;
    QComboBox *comboBox1;

    QLabel *label2;
    QLineEdit *lineEdit2;
    QTextEdit *textEdit;

    QPushButton *okBtn;
    QPushButton *cancelBtn;
};
