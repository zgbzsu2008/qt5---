#include "splitter.h"

#include <QtWidgets/QApplication>
#include <qfont.h>
#include <qsplitter.h>
#include <qtextedit.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Splitter w;
    // w.show();
    QFont font("ZYSong18030", 12);
    a.setFont(font);

    QSplitter *spMain = new QSplitter(Qt::Horizontal); // 水平分割
    QTextEdit *left = new QTextEdit("Left Widget", spMain);
    left->setAlignment(Qt::AlignCenter);

    QSplitter *spRight = new QSplitter(Qt::Vertical, spMain); // 垂直分割
    spRight->setOpaqueResize(false); // 实时更新
    QTextEdit *top = new QTextEdit("Top Widget", spRight);
    top->setAlignment(Qt::AlignCenter);

    QTextEdit *button = new QTextEdit("Button Widget", spRight);
    button->setAlignment(Qt::AlignCenter);

    spMain->setStretchFactor(1, 1); // 设置控件1 可伸缩1
    spMain->setWindowTitle("Splitter");
    spMain->show();

    return a.exec();
}
