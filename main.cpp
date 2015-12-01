#include "screen1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    screen1 w;
    w.show();
    //w.showFullScreen();

    return a.exec();
}
