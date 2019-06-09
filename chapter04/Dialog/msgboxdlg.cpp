#include "msgboxdlg.h"
#include <qinputdialog.h>
#include <qmessagebox.h>

MsgBoxDlg::MsgBoxDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("消息对话框");

    label = new QLabel;
    label->setText("选择消息框");

    questionBtn = new QPushButton;
    questionBtn->setText("QuestionMsg");

    informationBtn = new QPushButton;
    informationBtn->setText("InformationMsg");

    warningBtn = new QPushButton;
    warningBtn->setText("WarningMsg");

    criticalBtn = new QPushButton;
    criticalBtn->setText("CriticalMsg");

    aboutBtn = new QPushButton;
    aboutBtn->setText("AboutMsg");

    aboutQtBtn = new QPushButton;
    aboutQtBtn->setText("AboutQtMsg");

    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label, 0, 0, 1, 2);
    mainLayout->addWidget(questionBtn, 1, 0);
    mainLayout->addWidget(informationBtn, 1, 1);
    mainLayout->addWidget(warningBtn, 2, 0);
    mainLayout->addWidget(criticalBtn, 2, 1);
    mainLayout->addWidget(aboutBtn, 3, 0);
    mainLayout->addWidget(aboutQtBtn, 3, 1);

    connect(questionBtn, &QPushButton::clicked, this, &MsgBoxDlg::showQuestionMsg);
    connect(informationBtn, &QPushButton::clicked, this, &MsgBoxDlg::showInformationMsg);
    connect(warningBtn, &QPushButton::clicked, this, &MsgBoxDlg::showWarningMsg);
    connect(criticalBtn, &QPushButton::clicked, this, &MsgBoxDlg::showCriticalMsg);
    connect(aboutBtn, &QPushButton::clicked, this, &MsgBoxDlg::showAboutMsg);
    connect(aboutQtBtn, &QPushButton::clicked, this, &MsgBoxDlg::showAboutQtMsg);
}

void MsgBoxDlg::showQuestionMsg()
{
    label->setText("Question Message Box");
    switch (QMessageBox::question(this, "question", "exit?yes:no", QMessageBox::Ok | QMessageBox::Cancel,
                                  QMessageBox::Ok)) {
        case QMessageBox::Ok:
            label->setText("Question button/Ok");
            break;

        case QMessageBox::Cancel:
            label->setText("Question button/Cancel");
            break;

        default:
            break;
    }
}

void MsgBoxDlg::showInformationMsg()
{
    label->setText("Information Message Box");
    QMessageBox::information(this, "information", "information msg box");
}
void MsgBoxDlg::showWarningMsg()
{
    label->setText("Warning Message Box");
    switch (QMessageBox::warning(this, "warning", "warning message box",
                                 QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel, QMessageBox::Save)) {
        case QMessageBox::Save:
            label->setText("Warning button/Save");
            break;

        case QMessageBox::Discard:
            label->setText("Warning button/Discard");
            break;

        case QMessageBox::Cancel:
            label->setText("Warning button/Cancel");
            break;

        default:
            break;
    }
}

void MsgBoxDlg::showCriticalMsg() 
{
    label->setText("Critical Message Box");
    QMessageBox::critical(this, "critical", "critical message box");
}

void MsgBoxDlg::showAboutMsg()
{
    label->setText("About Message Box");
    QMessageBox::about(this, "about", "about message box");
}

void MsgBoxDlg::showAboutQtMsg()
{
    label->setText("AboutQt Message Box");
    QMessageBox::aboutQt(this, "aboutQt");
}