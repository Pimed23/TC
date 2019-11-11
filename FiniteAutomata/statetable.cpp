#include "statetable.h"
#include "ui_statetable.h"

StateTable::StateTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StateTable)
{
    ui->setupUi(this);
    stateTableContentWindow = new stateTableContent( this );
    QObject::connect( stateTableContentWindow,SIGNAL( back()), this, SLOT( hideWindow()));
}

StateTable::~StateTable()
{
    delete ui;
}

void StateTable::hideWindow() {
    this -> setVisible( true );
    stateTableContentWindow -> setVisible( false );
}

void StateTable::on_pushBack_clicked() {
    emit( back());
}

void StateTable::on_pushConvert_clicked() {
    this -> setVisible( false );
    stateTableContentWindow -> setVisible( true );
}
