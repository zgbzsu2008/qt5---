#include "inputdlg.h"
#include <qinputdialog.h>

InputDlg::InputDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("输入对话框");

    nameLabel1 = new QLabel;
    nameLabel1->setText("姓名：");
    nameLabel2 = new QLabel;
    nameLabel2->setText("张三");
    nameLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    nameBtn = new QPushButton;
    nameBtn->setText("修改");

    sexLabel1 = new QLabel;
    sexLabel1->setText("性别：");
    sexLabel2 = new QLabel;
    sexLabel2->setText("男");
    sexLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    sexBtn = new QPushButton;
    sexBtn->setText("修改");

    ageLabel1 = new QLabel;
    ageLabel1->setText("年龄：");
    ageLabel2 = new QLabel;
    ageLabel2->setText("21");
    ageLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    ageBtn = new QPushButton;
    ageBtn->setText("修改");

    scoreLabel1 = new QLabel;
    scoreLabel1->setText("成绩：");
    scoreLabel2 = new QLabel;
    scoreLabel2->setText("80");
    scoreLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    scoreBtn = new QPushButton;
    scoreBtn->setText("修改");

    mainLayout = new QGridLayout(this);

    mainLayout->addWidget(nameLabel1, 0, 0);
    mainLayout->addWidget(nameLabel2, 0, 1);
    mainLayout->addWidget(nameBtn, 0, 2);

    mainLayout->addWidget(sexLabel1, 1, 0);
    mainLayout->addWidget(sexLabel2, 1, 1);
    mainLayout->addWidget(sexBtn, 1, 2);

    mainLayout->addWidget(ageLabel1, 2, 0);
    mainLayout->addWidget(ageLabel2, 2, 1);
    mainLayout->addWidget(ageBtn, 2, 2);

    mainLayout->addWidget(scoreLabel1, 3, 0);
    mainLayout->addWidget(scoreLabel2, 3, 1);
    mainLayout->addWidget(scoreBtn, 3, 2);

    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    connect(nameBtn, &QPushButton::clicked, this, &InputDlg::changeName);
    connect(sexBtn, &QPushButton::clicked, this, &InputDlg::changeSex);
    connect(ageBtn, &QPushButton::clicked, this, &InputDlg::chhangeAge);
    connect(scoreBtn, &QPushButton::clicked, this, &InputDlg::changeScore);
}

void InputDlg::changeName()
{
    bool ok;
    QString text = QInputDialog::getText(this, "getText", "name:", QLineEdit::Normal, nameLabel2->text(), &ok);
    if (ok && !text.isEmpty()) {
        nameLabel2->setText(text);
    }
}

void InputDlg::chhangeAge()
{
    bool ok;
    int age = QInputDialog::getInt(this, "getInt", "age:", ageLabel2->text().toInt(&ok), 0, 100, 1, &ok);
    if (ok) {
        ageLabel2->setText(QString("%1").arg(age));
    }
}

void InputDlg::changeSex()
{
    QStringList sexItems;
    sexItems << "男"
             << "女";

    bool ok;
    QString it = QInputDialog::getItem(this, "getItem", "sex:", sexItems, 0, false, &ok);
    if (ok && !sexItems.isEmpty()) {
        sexLabel2->setText(it);
    }
}

void InputDlg::changeScore() {
    bool ok;
    double score =
        QInputDialog::getDouble(this, "getDouble", "score", scoreLabel2->text().toDouble(&ok), 0, 100, 3, &ok);
    if (ok) {
        scoreLabel2->setText(QString("%1").arg(score));
    }
}