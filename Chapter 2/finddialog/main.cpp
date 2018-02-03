#include "finddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    finddialog *dialog = new finddialog;
    dialog->show();
    return app.exec();
}
