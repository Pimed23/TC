/********************************************************************************
** Form generated from reading UI file 'regexpresion.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEXPRESION_H
#define UI_REGEXPRESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regExpresion
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *commandLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *regex;
    QLineEdit *regexContent;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushRegexTable;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLabel *transTable;
    QTableWidget *transTableContent;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushBack;
    QSpacerItem *horizontalSpacer_2;
    QLabel *spacer;
    QWidget *imageLayout;
    QHBoxLayout *horizontalSpacer_7;
    QWidget *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *image;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *regExpresion)
    {
        if (regExpresion->objectName().isEmpty())
            regExpresion->setObjectName(QString::fromUtf8("regExpresion"));
        regExpresion->resize(800, 400);
        layoutWidget = new QWidget(regExpresion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 741, 361));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        commandLayout = new QHBoxLayout();
        commandLayout->setObjectName(QString::fromUtf8("commandLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        regex = new QLabel(layoutWidget);
        regex->setObjectName(QString::fromUtf8("regex"));

        verticalLayout->addWidget(regex);

        regexContent = new QLineEdit(layoutWidget);
        regexContent->setObjectName(QString::fromUtf8("regexContent"));

        verticalLayout->addWidget(regexContent);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushRegexTable = new QPushButton(layoutWidget);
        pushRegexTable->setObjectName(QString::fromUtf8("pushRegexTable"));

        horizontalLayout_3->addWidget(pushRegexTable);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        transTable = new QLabel(layoutWidget);
        transTable->setObjectName(QString::fromUtf8("transTable"));

        verticalLayout->addWidget(transTable);

        transTableContent = new QTableWidget(layoutWidget);
        transTableContent->setObjectName(QString::fromUtf8("transTableContent"));

        verticalLayout->addWidget(transTableContent);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushBack = new QPushButton(layoutWidget);
        pushBack->setObjectName(QString::fromUtf8("pushBack"));

        horizontalLayout_6->addWidget(pushBack);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        commandLayout->addLayout(verticalLayout_2);

        spacer = new QLabel(layoutWidget);
        spacer->setObjectName(QString::fromUtf8("spacer"));

        commandLayout->addWidget(spacer);


        horizontalLayout_5->addLayout(commandLayout);

        imageLayout = new QWidget(layoutWidget);
        imageLayout->setObjectName(QString::fromUtf8("imageLayout"));
        horizontalSpacer_7 = new QHBoxLayout(imageLayout);
        horizontalSpacer_7->setObjectName(QString::fromUtf8("horizontalSpacer_7"));
        horizontalLayout_4 = new QWidget(imageLayout);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout(horizontalLayout_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        image = new QLabel(horizontalLayout_4);
        image->setObjectName(QString::fromUtf8("image"));

        horizontalLayout_2->addWidget(image);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalSpacer_7->addWidget(horizontalLayout_4);


        horizontalLayout_5->addWidget(imageLayout);


        retranslateUi(regExpresion);

        QMetaObject::connectSlotsByName(regExpresion);
    } // setupUi

    void retranslateUi(QDialog *regExpresion)
    {
        regExpresion->setWindowTitle(QCoreApplication::translate("regExpresion", "Dialog", nullptr));
        regex->setText(QCoreApplication::translate("regExpresion", "Ingrese su expresion Regular:", nullptr));
        pushRegexTable->setText(QCoreApplication::translate("regExpresion", "Convertir", nullptr));
        label->setText(QString());
        transTable->setText(QCoreApplication::translate("regExpresion", "Tabla de transiciones", nullptr));
        pushBack->setText(QCoreApplication::translate("regExpresion", "Volver", nullptr));
        spacer->setText(QString());
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class regExpresion: public Ui_regExpresion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXPRESION_H
