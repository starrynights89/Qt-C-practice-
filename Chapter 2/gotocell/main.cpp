#include "gotocelldialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gotocelldialog w;
    w.show();

    return a.exec();
}
