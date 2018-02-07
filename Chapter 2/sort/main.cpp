#include "sortdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sortdialog w;
    w.show();

    return a.exec();
}
