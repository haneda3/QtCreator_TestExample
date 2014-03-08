#include "testexample.h"

TestExample::TestExample(QObject *parent) :
    QObject(parent)
{
}

void TestExample::testHogeA()
{
    QCOMPARE("A", "A");
}


void TestExample::testHogeB()
{
}

