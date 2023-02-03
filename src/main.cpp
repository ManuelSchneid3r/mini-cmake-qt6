#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "library.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    Library l;
    QApplication app(argc, argv);
    app.setApplicationDisplayName(l.get_hello());
    QWidget w;
    w.setWindowTitle(l.get_hello());
    w.show();
    return app.exec();
}
