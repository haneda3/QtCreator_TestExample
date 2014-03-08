#ifndef TESTEXAMPLE_H
#define TESTEXAMPLE_H

#include <QObject>
#include <QtTest/QtTest>

class TestExample : public QObject
{
    Q_OBJECT
public:
    explicit TestExample(QObject *parent = 0);

signals:

public slots:

private slots:
    void testHogeA();
    void testHogeB();
};

#endif // TESTEXAMPLE_H
