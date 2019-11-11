#ifndef REGEXPRESION_H
#define REGEXPRESION_H

#include <QDialog>

namespace Ui {
class regExpresion;
}

class regExpresion : public QDialog
{
    Q_OBJECT

public:
    explicit regExpresion(QWidget *parent = nullptr);
    ~regExpresion();

signals:
    void back();

private slots:
    void on_pushBack_clicked();

private:
    Ui::regExpresion *ui;
};

#endif // REGEXPRESION_H
