#include "mainwindow.h"
#include <QtPlugin>
#include <QApplication>

Q_IMPORT_PLUGIN(BasicToolsPlugin)

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}
