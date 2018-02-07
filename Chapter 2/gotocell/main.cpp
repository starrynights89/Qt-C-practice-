#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Ui:GoToCellDialog ui;
    QDialog *dialog = new QDialog;
    ui.setupUi(dialog);
    dialog->show();
   
    return app.exec();
}
