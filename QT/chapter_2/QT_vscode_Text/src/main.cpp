#include "QT_Test.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_Test w;
    w.show();
    return a.exec();
}