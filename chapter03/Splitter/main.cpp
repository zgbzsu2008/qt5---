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

    QSplitter *spMain = new QSplitter(Qt::Horizontal); // ˮƽ�ָ�
    QTextEdit *left = new QTextEdit("Left Widget", spMain);
    left->setAlignment(Qt::AlignCenter);

    QSplitter *spRight = new QSplitter(Qt::Vertical, spMain); // ��ֱ�ָ�
    spRight->setOpaqueResize(false); // ʵʱ����
    QTextEdit *top = new QTextEdit("Top Widget", spRight);
    top->setAlignment(Qt::AlignCenter);

    QTextEdit *button = new QTextEdit("Button Widget", spRight);
    button->setAlignment(Qt::AlignCenter);

    spMain->setStretchFactor(1, 1); // ���ÿؼ�1 ������1
    spMain->setWindowTitle("Splitter");
    spMain->show();

    return a.exec();
}
