#include "age_widget.h"
#include "ui_age_widget.h"

age_widget::age_widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::age_widget)
{
    ui->setupUi(this);
}

age_widget::~age_widget()
{
    delete ui;
}
