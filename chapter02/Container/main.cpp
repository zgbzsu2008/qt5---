#include <QtCore/QCoreApplication>
#include <QtCore/qdebug.h>
#include <QtCore/qlinkedlist.h>
#include <QtCore/qlist.h>
#include <QtCore/qmap.h>
#include <QtCore/qvector.h>
#include <QtCore/qhash.h>
#include <QtCore/qvariant.h>
#include <string>

template<typename T>
QDebug operator<<(QDebug out, QLinkedList<T> list)
{
    out.nospace() << "QLinkedList(";
    for (auto it = list.begin(); it != list.end(); ++it) {
        out << *it << (*it == list.back() ? ")" : ", ");
    }
    return out.space();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        QList<int> list; // 插入O(n)
        for (int i = 0; i < 10; i++) {
            list.push_back(i);
        }

        qDebug() << list;
        for (auto it = list.begin(); it != list.end(); ++it) {
            qDebug() << *it;
        }
    }

    {
        QLinkedList<int> list; // 查找O(n)
        for (int i = 0; i < 10; i++) {
            list.push_back(i);
        }

        qDebug() << list;
        for (auto it = list.begin(); it != list.end(); ++it) {
            qDebug() << *it;
        }
    }

    {
        QVector<int> vec; // 插入O(n)，头部插入O(n)
        for (int i = 0; i < 10; i++) {
            vec.push_back(i);
        }

        qDebug() << vec;
        for (auto it = vec.begin(); it != vec.end(); ++it) {
            qDebug() << *it;
        }
    }

    {
        QMap<int, QString> map; // 插入\查找O(log(n))
        for (int i = 0; i < 10; i++) {
            map.insert(i, QString().sprintf("v%d", i));
        }

        qDebug() << map;
        for (auto it = map.begin(); it != map.end(); ++it) {
            qDebug() << *it;
        }
    }

    {
        QHash<int, QString> hash; // 插入\查找O(1) 最坏O(n)
        for (int i = 0; i < 10; i++) {
            hash.insert(i, QString().sprintf("v%d", i));
        }

        qDebug() << hash;
        for (auto it = hash.begin(); it != hash.end(); ++it) {
            qDebug() << *it;
        }
    }

    {
        QVariant qv(123);
        qDebug() << qv.toInt();

        qv = "abc";
        qDebug() << qv.toString();

        qv = 123.456;
        qDebug() << qv.toDouble();

        qv = QString("qstring");
        qDebug() << qv.value<QString>();
    }

    return a.exec();
}
