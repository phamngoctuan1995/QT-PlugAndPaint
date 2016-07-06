#include "basictoolsplugin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    basictoolsplugin w;
    w.show();

    return a.exec();
}
