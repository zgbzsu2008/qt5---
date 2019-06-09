#include "processdlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProcessDlg w;
    w.show();
    return a.exec();
}
