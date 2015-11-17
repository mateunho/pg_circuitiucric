#ifndef MAINWIDGET_HPP
#define MAINWIDGET_HPP

#include <QWidget>



namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private slots:
    void on_pushAdd_clicked();

    void on_pushRemove_clicked();

private:
    Ui::MainWidget *ui;
};



#endif // MAINWIDGET_HPP
