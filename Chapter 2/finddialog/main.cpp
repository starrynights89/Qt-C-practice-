#include "finddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    FindDialog *dialog = new Findialog;
    dialog->show();
    return app.exec();
}
