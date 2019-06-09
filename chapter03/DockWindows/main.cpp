#include "dockwindows.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DockWindows w;
    w.show();
    return a.exec();
}
