#ifndef AGE_WIDGET_H
#define AGE_WIDGET_H

#include <QMainWindow>

namespace Ui {
class age_widget;
}

class age_widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit age_widget(QWidget *parent = 0);
    ~age_widget();

private:
    Ui::age_widget *ui;
};

#endif // AGE_WIDGET_H
