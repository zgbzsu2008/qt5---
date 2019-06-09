#include "dockwindows.h"

#include <qtextedit.h>
#include <qdockwidget.h>

DockWindows::DockWindows(QWidget *parent)
    : QMainWindow(parent)
{
    //ui.setupUi(this);
    setWindowTitle("DockWindows");

    QTextEdit *te = new QTextEdit(this);
    te->setText("Main Window");
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te);

    // dock1
    QDockWidget *dock = new QDockWidget("DockWindow1", this);
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit *te1 = new QTextEdit(this);
    te1->setText("TextEdit1");
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea, dock);

    // dock2
    dock = new QDockWidget("DockWindow2", this);
    dock->setFeatures(QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetFloatable);
    QTextEdit *te2 = new QTextEdit();
    te2->setText("TextEdit2");
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea, dock);

    // dock3
    dock = new QDockWidget("DockWindow3", this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit *te3 = new QTextEdit();
    te3->setText("TextEdit3");
    dock->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea, dock);
}
