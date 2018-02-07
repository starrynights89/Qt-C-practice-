#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GoToCellDialog *dialog = new GoToCellDialog;
    dialog->show();
    return app.exec();
}
