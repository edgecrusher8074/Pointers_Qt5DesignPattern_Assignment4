#include <QCoreApplication>

/**
 * @brief Assignment 4 for Qt5 Design Patterns Tutorial on Udemy.
 * @details Test the life-cycle of (shared ptrs).
 * @author edgecrusher8074
 */

#include <QDebug>
#include <QSharedPointer>
#include <QList>

#include "beer.h"

//*
typedef QSharedPointer<Beer> t_ptr;
/*/
typedef Beer* t_ptr;
//*/

typedef QList<t_ptr> t_lst;

void test()
{
    t_lst ptrLst;

    for(int idx = 0; idx < 5; ++idx)
    {
        auto b = t_ptr(new Beer());
        b->setObjectName(QString("Beer: %1").arg(idx+1));
        ptrLst << b;
    }

    for(const auto& b : ptrLst)
    {
        qInfo() << b->objectName();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();

    return a.exec();
}
