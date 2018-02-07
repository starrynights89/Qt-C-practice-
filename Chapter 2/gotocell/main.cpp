#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gotocelldialog w;
    w.show();

    return a.exec();
}
