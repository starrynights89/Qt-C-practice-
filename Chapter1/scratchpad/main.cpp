#include "scratchpad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    scratchpad w;
    w.show();

    return a.exec();
}
