#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::white);

    ui->imageLayout->setAutoFillBackground(true);
    ui->imageLayout->setPalette(Pal);
}

MainMenu::~MainMenu()
{
    delete ui;
}

