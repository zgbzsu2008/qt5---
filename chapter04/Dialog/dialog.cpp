#include "dialog.h"

#include <qfiledialog.h>
#include <qcolordialog.h>
#include <qfontdialog.h>
#include <qmessagebox.h>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);

    // file
    fileBtn = new QPushButton;
    fileBtn->setText("文件对话框");
    fileLineEdit = new QLineEdit;

    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(fileLineEdit, 0, 0);
    mainLayout->addWidget(fileBtn, 0, 1);

    connect(fileBtn, &QPushButton::clicked, this, &Dialog::showFile);

    // color
    colorBtn = new QPushButton;
    colorBtn->setText("颜色对话框");
    colorFrame = new QFrame;
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setAutoFillBackground(true);

    mainLayout->addWidget(colorFrame, 1, 0);
    mainLayout->addWidget(colorBtn, 1, 1);

    connect(colorBtn, &QPushButton::clicked, this, &Dialog::showColor);

    // font
    fontBtn = new QPushButton;
    fontBtn->setText("字体对话框");
    fontLineEdit = new QLineEdit;
    fontLineEdit->setText("Wellcom!");

    mainLayout->addWidget(fontLineEdit, 2, 0);
    mainLayout->addWidget(fontBtn, 2, 1);

    connect(fontBtn, &QPushButton::clicked, this, &Dialog::showFont);

    // input
    inputBtn = new QPushButton;
    inputBtn->setText("输入对话框");

    mainLayout->addWidget(inputBtn, 3, 1);

    connect(inputBtn, &QPushButton::clicked, this, &Dialog::showInputDlg);

    // msg
    msgBtn = new QPushButton;
    msgBtn->setText("消息对话框");

    mainLayout->addWidget(msgBtn, 4, 1);
    connect(msgBtn, &QPushButton::clicked, this, &Dialog::showMsgDlg);

    // custom msg
    customBtn = new QPushButton;
    customBtn->setText("定制对话框");
    label = new QLabel;
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);

    mainLayout->addWidget(customBtn, 4, 1);
    mainLayout->addWidget(label, 4, 0);

    connect(customBtn, &QPushButton::clicked, this, &Dialog::showCustomDlg);
}

void Dialog::showFile()
{
    QString filter = "files(*.cpp *.c *.h);;Image(*.jpg *.png);;XML(*.xml)";
    QString s = QFileDialog::getOpenFileName(this, "open file dialog", "./", filter);
    fileLineEdit->setText(s);
}

void Dialog::showColor()
{
    QColor c = QColorDialog::getColor(Qt::blue);
    if (c.isValid()) {
        colorFrame->setPalette(QPalette(c));
    }
}

void Dialog::showFont()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if (ok) {
        fontLineEdit->setFont(font);
    }
}

void Dialog::showInputDlg()
{
    inputDlg = new InputDlg(this);
    inputDlg->show();
}

void Dialog::showMsgDlg()
{
    msgDlg = new MsgBoxDlg(this);
    msgDlg->show();
}

void Dialog::showCustomDlg()
{
    label->setText("Custom Message Box");
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("custom msg box");
    QPushButton *yesBtn = customMsgBox.addButton("Yes", QMessageBox::ActionRole);
    QPushButton *noBtn = customMsgBox.addButton("No", QMessageBox::ActionRole);
    QPushButton *cancelBtn = customMsgBox.addButton(QMessageBox::Cancel);
    customMsgBox.setText("Custom Message Box");
    customMsgBox.setIconPixmap(QPixmap("312.png"));
    customMsgBox.exec();

    if (customMsgBox.clickedButton() == yesBtn) {
        label->setText("Custom Message Box/Yes");
    } else if (customMsgBox.clickedButton() == noBtn) {
        label->setText("Custom Message Box/No");
    } else if (customMsgBox.clickedButton() == cancelBtn) {
        label->setText("Custom Message Box/Cancel");
    }
}
