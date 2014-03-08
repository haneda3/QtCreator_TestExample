#ifndef TESTEXAMPLE2_H
#define TESTEXAMPLE2_H

#include <QObject>
#include <QtTest/QtTest>

class TestExample2 : public QObject
{
    Q_OBJECT
public:
    explicit TestExample2(QObject *parent = 0);

signals:

private slots:
    void testHogeC();

};

#endif // TESTEXAMPLE2_H
