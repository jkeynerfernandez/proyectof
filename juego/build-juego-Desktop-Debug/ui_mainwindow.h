/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGraphicsView *marcoVisualdeljuego;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(400, 300);
        marcoVisualdeljuego = new QGraphicsView(Form);
        marcoVisualdeljuego->setObjectName("marcoVisualdeljuego");
        marcoVisualdeljuego->setEnabled(true);
        marcoVisualdeljuego->setGeometry(QRect(0, 0, 1026, 553));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(marcoVisualdeljuego->sizePolicy().hasHeightForWidth());
        marcoVisualdeljuego->setSizePolicy(sizePolicy);
        marcoVisualdeljuego->setMaximumSize(QSize(1500, 904));
        marcoVisualdeljuego->setAcceptDrops(false);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
#if QT_CONFIG(tooltip)
        marcoVisualdeljuego->setToolTip(QCoreApplication::translate("Form", "<html><head/><body><p><img src=\":/imagenes/escenario/calles1.jpg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
