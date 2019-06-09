#include "content.h"

#include <QtWidgets/QApplication>
#include <qsplitter.h>
#include <qlistwidget.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("AR PL KaitiM GB", 12);
    a.setFont(font);

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
    splitterMain->setOpaqueResize(true);
    QListWidget *list = new QListWidget(splitterMain);
    list->insertItem(0, "������Ϣ");
    list->insertItem(1, "��ϵ��ʽ");
    list->insertItem(2, "��ϸ��Ϣ");

    Content *content = new Content(splitterMain);

    QObject::connect(list, &QListWidget::currentRowChanged, content->stack, &QStackedWidget::setCurrentIndex);

    splitterMain->setWindowIconText("�޸��û�����");
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();

    return a.exec();
}
