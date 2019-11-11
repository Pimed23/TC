#include "statetablecontent.h"
#include "ui_statetablecontent.h"

stateTableContent::stateTableContent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stateTableContent)
{
    ui->setupUi(this);
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::white);

    ui->imageLayout->setAutoFillBackground(true);
    ui->imageLayout->setPalette(Pal);
}

stateTableContent::~stateTableContent() {
    delete ui;
}

void stateTableContent::on_pushBack_clicked() {
    emit( back());
}
