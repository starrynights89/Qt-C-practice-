#include "finddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    finddialog w;
    w.show();

    return a.exec();
}
