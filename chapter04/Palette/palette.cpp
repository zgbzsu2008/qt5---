#include "palette.h"
#include <qlayout.h>

Palette::Palette(QWidget *parent)
    : QDialog(parent)
{
    // ui.setupUi(this);
    createCtrlFrame();
    createContentFrame();
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    mainLayout->addWidget(ctrlFrame);
    mainLayout->addWidget(contentFrame);
}

void Palette::createCtrlFrame()
{
    ctrlFrame = new QFrame;
    windowLabel = new QLabel("QPalette::Window: ");
    windowComboBox = new QComboBox;
    this->fillColorList(windowComboBox);
    connect(windowComboBox, (void (QComboBox::*)(int)) & QComboBox::activated, this, &Palette::showWindow);

    windowTextLabel = new QLabel("QPalette::WindowText: ");
    windowTextComboBox = new QComboBox;
    this->fillColorList(windowTextComboBox);
    connect(windowTextComboBox, (void (QComboBox::*)(int)) & QComboBox::activated, this, &Palette::showWindowText);

    buttonLabel = new QLabel("QPalette::Button: ");
    buttonComboBox = new QComboBox;
    this->fillColorList(buttonComboBox);
    connect(buttonComboBox, (void (QComboBox::*)(int)) & QComboBox::activated, this, &Palette::showButton);

    buttonTextLabel = new QLabel("QPalette::ButtonText: ");
    buttonTextComboBox = new QComboBox;
    this->fillColorList(buttonTextComboBox);
    connect(buttonTextComboBox, (void (QComboBox::*)(int)) & QComboBox::activated, this, &Palette::showButtonText);

    baseLabel = new QLabel("QPatette::Base: ");
    baseComboBox = new QComboBox;
    this->fillColorList(baseComboBox);
    connect(baseComboBox, (void (QComboBox::*)(int)) & QComboBox::activated, this, &Palette::showBase);

    QGridLayout *mainLayout = new QGridLayout(ctrlFrame);
    mainLayout->setSpacing(20);

    mainLayout->addWidget(windowLabel, 0, 0);
    mainLayout->addWidget(windowComboBox, 0, 1);

    mainLayout->addWidget(windowTextLabel, 1, 0);
    mainLayout->addWidget(windowTextComboBox, 1, 1);

    mainLayout->addWidget(buttonLabel, 2, 0);
    mainLayout->addWidget(buttonComboBox, 2, 1);

    mainLayout->addWidget(buttonTextLabel, 3, 0);
    mainLayout->addWidget(buttonTextComboBox, 3, 1);

    mainLayout->addWidget(baseLabel, 4, 0);
    mainLayout->addWidget(baseComboBox, 4, 1);
}

void Palette::createContentFrame()
{
    contentFrame = new QFrame;
    label1 = new QLabel("Choose one value: ");
    comboBox1 = new QComboBox;

    label2 = new QLabel("Input string: ");
    lineEdit2 = new QLineEdit;
    textEdit = new QTextEdit;

    QGridLayout *topLayout = new QGridLayout;
    topLayout->addWidget(label1, 0, 0);
    topLayout->addWidget(comboBox1, 0, 1);
    topLayout->addWidget(label2, 1, 0);
    topLayout->addWidget(lineEdit2, 1, 1);
    topLayout->addWidget(textEdit, 2, 0, 1, 2);

    okBtn = new QPushButton("ok");
    cancelBtn = new QPushButton("cancel");

    QHBoxLayout *bottomLayout = new QHBoxLayout;
    bottomLayout->addStretch(1);
    bottomLayout->addWidget(okBtn);
    bottomLayout->addWidget(cancelBtn);

    QVBoxLayout *mainLayout = new QVBoxLayout(contentFrame);
    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(bottomLayout);
}

void Palette::fillColorList(QComboBox *comboBox)
{
    QStringList colorLists = QColor::colorNames();
    QSize s(20, 20);
    QPixmap pix(s);
    for (auto color : colorLists) {
        pix.fill(QColor(color));
        comboBox->addItem(QIcon(pix), color);
        comboBox->setIconSize(s);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
    }
}

void Palette::showWindow()
{
    QStringList colorLists = QColor::colorNames();
    QColor color = QColor(colorLists[windowComboBox->currentIndex()]);

    QPalette p = contentFrame->palette();
    p.setColor(QPalette::Window, color);
    contentFrame->setPalette(p);
    contentFrame->update();
}

void Palette::showWindowText()
{
    QStringList colorLists = QColor::colorNames();
    QColor color = QColor(colorLists[windowTextComboBox->currentIndex()]);

    QPalette p = contentFrame->palette();
    p.setColor(QPalette::WindowText, color);
    contentFrame->setPalette(p);
    contentFrame->update();
}

void Palette::showButton()
{
    QStringList colorLists = QColor::colorNames();
    QColor color = QColor(colorLists[buttonComboBox->currentIndex()]);

    QPalette p = contentFrame->palette();
    p.setColor(QPalette::Button, color);
    contentFrame->setPalette(p);
    contentFrame->update();
}

void Palette::showButtonText() {
    QStringList colorLists = QColor::colorNames();
    QColor color = QColor(colorLists[buttonTextComboBox->currentIndex()]);

    QPalette p = contentFrame->palette();
    p.setColor(QPalette::ButtonText, color);
    contentFrame->setPalette(p);
    contentFrame->update();
}

void Palette::showBase()
{
    QStringList colorLists = QColor::colorNames();
    QColor color = QColor(colorLists[baseComboBox->currentIndex()]);

    QPalette p = contentFrame->palette();
    p.setColor(QPalette::Base, color);
    contentFrame->setPalette(p);
    contentFrame->update();
}
