#include "stackdlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StackDlg w;
    w.show();
    return a.exec();
}
