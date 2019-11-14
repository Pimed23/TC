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

    QStringList titulo_v, titulo_h;
    auto state = automata -> getState();
    auto alphabet = automata -> getAlphabet();

    int tamS = state.size() & INT_MAX;
    ui->transTableContent -> setRowCount( tamS );

    int tamA = alphabet.size() & INT_MAX;
    ui -> transTableContent -> setColumnCount( tamA );

    for( size_t i = 0; i < state.size(); ++i )
        titulo_v.push_back( state[ i ]);

    for( size_t i = 0; i < alphabet.size(); ++i )
        titulo_h.push_back( alphabet[ i ]);

    ui -> transTableContent -> setHorizontalHeaderLabels( titulo_h );
    ui -> transTableContent -> setVerticalHeaderLabels( titulo_v );
}

stateTableContent::~stateTableContent() {
    delete ui;
}

void stateTableContent::on_pushBack_clicked() {
    emit( back());
}
