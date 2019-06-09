#include <QtCore/QCoreApplication>
#include <QtCore/qdebug.h>
#include <assert.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        auto str = QString("%1 to %2").arg("welcom").arg("you");
        qDebug() << str;
    }

    {
        QString str;
        str.sprintf("%s to %s", "welcom", "you");
        qDebug() << str;
    }

    {
        QString str = "ÄãºÃ";
        QByteArray ba = str.toUtf8();
        qDebug() << str << ba;
    }

    {
        QString str("123");
        bool ok;
        int value = str.toInt(&ok);
        qDebug() << str << ok << value;
    }

    return a.exec();
}
