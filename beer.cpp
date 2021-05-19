#include "beer.h"

Beer::Beer(QObject *parent) : QObject(parent)
{
    qInfo() << "opening beer:" << this;
}

Beer::~Beer()
{
    qInfo() << "finishing beer:" << this;
}
