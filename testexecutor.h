#include <QObject>
#include <QtTest/QtTest>
#include "testexample.h"
#include "testexample2.h"

class TestExecutor : public QObject {
public:
    static void exec(int argc, char **argv);
};
