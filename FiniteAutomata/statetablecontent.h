#ifndef STATETABLECONTENT_H
#define STATETABLECONTENT_H

#include <QDialog>
#include <climits>
#include "automata.h"

extern Automata *automata;

namespace Ui {
class stateTableContent;
}

class stateTableContent : public QDialog
{
    Q_OBJECT

public:
    explicit stateTableContent(QWidget *parent = nullptr);
    ~stateTableContent();

signals:
    void back();

private slots:
    void on_pushBack_clicked();

private:
    Ui::stateTableContent *ui;
};

#endif // STATETABLECONTENT_H
