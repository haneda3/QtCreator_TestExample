#include "testexample2.h"

TestExample2::TestExample2(QObject *parent) :
    QObject(parent)
{
}

void TestExample2::testHogeC()
{
    QCOMPARE("A", "A");
}

