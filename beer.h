#pragma once

#include <QObject>
#include <QDebug>


/**
 * @brief Test class.
 * @details A very simple class to test the life cylce.
 *          Provides creation and destruction information.
 */
class Beer : public QObject
{
    Q_OBJECT
public:
    Beer(QObject *parent = nullptr);
    ~Beer();
};

