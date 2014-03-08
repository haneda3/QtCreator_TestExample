#include "mainwindow.h"
#include <QApplication>
#ifdef __TEST__
    #include "testexecutor.h"
#endif

#ifdef __TEST__
int main(int argc, char *argv[])
{
    TestExecutor::exec(argc, argv);
    return 0;
}

#else
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
#endif
