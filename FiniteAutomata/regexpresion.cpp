#include "regexpresion.h"
#include "ui_regexpresion.h"

regExpresion::regExpresion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regExpresion)
{
    ui->setupUi(this);
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::white);

    ui->imageLayout->setAutoFillBackground(true);
    ui->imageLayout->setPalette(Pal);
}

regExpresion::~regExpresion()
{
    delete ui;
}

void regExpresion::on_pushBack_clicked() {
    emit( back());
}
