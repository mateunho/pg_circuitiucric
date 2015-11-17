#include "MainWidget.hpp"
#include "ui_MainWidget.h"



MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    connect(ui->pushRaw, SIGNAL(clicked(bool)),
            ui->lineInput, SLOT(setEnabled(bool)));
}


MainWidget::~MainWidget()
{
    delete ui;
}


void MainWidget::on_pushAdd_clicked()
{
    ui->lineInput->setText(ui->lineInput->text()
                            + " "
                            + ui->spinElement->text());
}


void MainWidget::on_pushRemove_clicked()
{
    QString str = ui->lineInput->text();
    int i = str.lastIndexOf(' ');
    ui->lineInput->setText(str.remove(i, 3));
}
