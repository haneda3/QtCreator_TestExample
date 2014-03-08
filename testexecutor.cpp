#include "testexecutor.h"

void TestExecutor::exec(int argc, char **argv) {
    QTest::qExec(new TestExample(), argc, argv);
    QTest::qExec(new TestExample2(), argc, argv);
}
