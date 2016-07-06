#include "extrafiltersplugin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    extrafiltersplugin w;
    w.show();

    return a.exec();
}
