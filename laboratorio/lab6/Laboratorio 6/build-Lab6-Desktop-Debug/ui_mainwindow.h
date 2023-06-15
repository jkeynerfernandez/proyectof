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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *inputs_frame;
    QVBoxLayout *name_frame;
    QLabel *name_label;
    QLineEdit *name_box_1;
    QLineEdit *name_box_2;
    QLineEdit *name_box_3;
    QLineEdit *name_box_4;
    QLineEdit *name_box_5;
    QLineEdit *name_box_6;
    QVBoxLayout *color_frame;
    QLabel *color_label;
    QComboBox *color_1;
    QComboBox *color_2;
    QComboBox *color_3;
    QComboBox *color_4;
    QComboBox *color_5;
    QComboBox *color_6;
    QVBoxLayout *x_frame;
    QLabel *x_label;
    QSpinBox *x_box_1;
    QSpinBox *x_box_2;
    QSpinBox *x_box_3;
    QSpinBox *x_box_4;
    QSpinBox *x_box_5;
    QSpinBox *x_box_6;
    QVBoxLayout *y_frame;
    QLabel *y_label;
    QSpinBox *y_box_1;
    QSpinBox *y_box_2;
    QSpinBox *y_box_3;
    QSpinBox *y_box_4;
    QSpinBox *y_box_5;
    QSpinBox *y_box_6;
    QVBoxLayout *m_frame;
    QLabel *m_label;
    QDoubleSpinBox *m_box_1;
    QDoubleSpinBox *m_box_2;
    QDoubleSpinBox *m_box_3;
    QDoubleSpinBox *m_box_4;
    QDoubleSpinBox *m_box_5;
    QDoubleSpinBox *m_box_6;
    QVBoxLayout *r_frame;
    QLabel *r_label;
    QSpinBox *r_box_1;
    QSpinBox *r_box_2;
    QSpinBox *r_box_3;
    QSpinBox *r_box_4;
    QSpinBox *r_box_5;
    QSpinBox *r_box_6;
    QVBoxLayout *vx_frame;
    QLabel *vx_label;
    QDoubleSpinBox *vx_box_1;
    QDoubleSpinBox *vx_box_2;
    QDoubleSpinBox *vx_box_3;
    QDoubleSpinBox *vx_box_4;
    QDoubleSpinBox *vx_box_5;
    QDoubleSpinBox *vx_box_6;
    QVBoxLayout *vy_frame;
    QLabel *vy_label;
    QDoubleSpinBox *vy_box_1;
    QDoubleSpinBox *vy_box_2;
    QDoubleSpinBox *vy_box_3;
    QDoubleSpinBox *vy_box_4;
    QDoubleSpinBox *vy_box_5;
    QDoubleSpinBox *vy_box_6;
    QVBoxLayout *speed_frame;
    QLabel *speed_label;
    QHBoxLayout *speed_slider_frame;
    QSlider *speed_slider;
    QHBoxLayout *buttons_frame;
    QPushButton *start_button;
    QPushButton *stop_button;
    QPushButton *pause_button;
    QPushButton *resume_button;
    QWidget *layoutWidget1;
    QVBoxLayout *save_layout;
    QPushButton *Export_button;
    QPushButton *Import_button;
    QLabel *save_label;
    QCheckBox *save_box;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1018, 880);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setFocusPolicy(Qt::NoFocus);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 240, 811, 441));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 1, 811, 240));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inputs_frame = new QHBoxLayout();
        inputs_frame->setObjectName("inputs_frame");
        name_frame = new QVBoxLayout();
        name_frame->setObjectName("name_frame");
        name_frame->setSizeConstraint(QLayout::SetDefaultConstraint);
        name_label = new QLabel(layoutWidget);
        name_label->setObjectName("name_label");

        name_frame->addWidget(name_label, 0, Qt::AlignHCenter);

        name_box_1 = new QLineEdit(layoutWidget);
        name_box_1->setObjectName("name_box_1");
        name_box_1->setText(QString::fromUtf8("1"));

        name_frame->addWidget(name_box_1);

        name_box_2 = new QLineEdit(layoutWidget);
        name_box_2->setObjectName("name_box_2");

        name_frame->addWidget(name_box_2);

        name_box_3 = new QLineEdit(layoutWidget);
        name_box_3->setObjectName("name_box_3");

        name_frame->addWidget(name_box_3);

        name_box_4 = new QLineEdit(layoutWidget);
        name_box_4->setObjectName("name_box_4");

        name_frame->addWidget(name_box_4);

        name_box_5 = new QLineEdit(layoutWidget);
        name_box_5->setObjectName("name_box_5");

        name_frame->addWidget(name_box_5);

        name_box_6 = new QLineEdit(layoutWidget);
        name_box_6->setObjectName("name_box_6");
        name_box_6->setFrame(true);
        name_box_6->setCursorPosition(1);

        name_frame->addWidget(name_box_6);


        inputs_frame->addLayout(name_frame);

        color_frame = new QVBoxLayout();
        color_frame->setObjectName("color_frame");
        color_label = new QLabel(layoutWidget);
        color_label->setObjectName("color_label");

        color_frame->addWidget(color_label, 0, Qt::AlignHCenter);

        color_1 = new QComboBox(layoutWidget);
        color_1->addItem(QString());
        color_1->addItem(QString());
        color_1->addItem(QString());
        color_1->addItem(QString());
        color_1->addItem(QString());
        color_1->addItem(QString());
        color_1->setObjectName("color_1");

        color_frame->addWidget(color_1);

        color_2 = new QComboBox(layoutWidget);
        color_2->addItem(QString());
        color_2->addItem(QString());
        color_2->addItem(QString());
        color_2->addItem(QString());
        color_2->addItem(QString());
        color_2->addItem(QString());
        color_2->setObjectName("color_2");

        color_frame->addWidget(color_2);

        color_3 = new QComboBox(layoutWidget);
        color_3->addItem(QString());
        color_3->addItem(QString());
        color_3->addItem(QString());
        color_3->addItem(QString());
        color_3->addItem(QString());
        color_3->addItem(QString());
        color_3->setObjectName("color_3");

        color_frame->addWidget(color_3);

        color_4 = new QComboBox(layoutWidget);
        color_4->addItem(QString());
        color_4->addItem(QString());
        color_4->addItem(QString());
        color_4->addItem(QString());
        color_4->addItem(QString());
        color_4->addItem(QString());
        color_4->setObjectName("color_4");

        color_frame->addWidget(color_4);

        color_5 = new QComboBox(layoutWidget);
        color_5->addItem(QString());
        color_5->addItem(QString());
        color_5->addItem(QString());
        color_5->addItem(QString());
        color_5->addItem(QString());
        color_5->addItem(QString());
        color_5->setObjectName("color_5");

        color_frame->addWidget(color_5);

        color_6 = new QComboBox(layoutWidget);
        color_6->addItem(QString());
        color_6->addItem(QString());
        color_6->addItem(QString());
        color_6->addItem(QString());
        color_6->addItem(QString());
        color_6->addItem(QString());
        color_6->setObjectName("color_6");

        color_frame->addWidget(color_6);


        inputs_frame->addLayout(color_frame);

        x_frame = new QVBoxLayout();
        x_frame->setObjectName("x_frame");
        x_label = new QLabel(layoutWidget);
        x_label->setObjectName("x_label");

        x_frame->addWidget(x_label, 0, Qt::AlignHCenter);

        x_box_1 = new QSpinBox(layoutWidget);
        x_box_1->setObjectName("x_box_1");
        x_box_1->setMinimum(-99999);
        x_box_1->setMaximum(99999);
        x_box_1->setValue(0);

        x_frame->addWidget(x_box_1);

        x_box_2 = new QSpinBox(layoutWidget);
        x_box_2->setObjectName("x_box_2");
        x_box_2->setMinimum(-99999);
        x_box_2->setMaximum(99999);

        x_frame->addWidget(x_box_2);

        x_box_3 = new QSpinBox(layoutWidget);
        x_box_3->setObjectName("x_box_3");
        x_box_3->setMinimum(-99999);
        x_box_3->setMaximum(99999);
        x_box_3->setValue(0);

        x_frame->addWidget(x_box_3);

        x_box_4 = new QSpinBox(layoutWidget);
        x_box_4->setObjectName("x_box_4");
        x_box_4->setMinimum(-99999);
        x_box_4->setMaximum(99999);

        x_frame->addWidget(x_box_4);

        x_box_5 = new QSpinBox(layoutWidget);
        x_box_5->setObjectName("x_box_5");
        x_box_5->setMinimum(-99999);
        x_box_5->setMaximum(99999);

        x_frame->addWidget(x_box_5);

        x_box_6 = new QSpinBox(layoutWidget);
        x_box_6->setObjectName("x_box_6");
        x_box_6->setMinimum(-99999);
        x_box_6->setMaximum(99999);

        x_frame->addWidget(x_box_6);


        inputs_frame->addLayout(x_frame);

        y_frame = new QVBoxLayout();
        y_frame->setObjectName("y_frame");
        y_label = new QLabel(layoutWidget);
        y_label->setObjectName("y_label");

        y_frame->addWidget(y_label, 0, Qt::AlignHCenter);

        y_box_1 = new QSpinBox(layoutWidget);
        y_box_1->setObjectName("y_box_1");
        y_box_1->setMinimum(-99999);
        y_box_1->setMaximum(99999);
        y_box_1->setValue(0);

        y_frame->addWidget(y_box_1);

        y_box_2 = new QSpinBox(layoutWidget);
        y_box_2->setObjectName("y_box_2");
        y_box_2->setMinimum(-99999);
        y_box_2->setMaximum(99999);

        y_frame->addWidget(y_box_2);

        y_box_3 = new QSpinBox(layoutWidget);
        y_box_3->setObjectName("y_box_3");
        y_box_3->setMinimum(-99999);
        y_box_3->setMaximum(99999);
        y_box_3->setValue(0);

        y_frame->addWidget(y_box_3);

        y_box_4 = new QSpinBox(layoutWidget);
        y_box_4->setObjectName("y_box_4");
        y_box_4->setMinimum(-99999);
        y_box_4->setMaximum(99999);

        y_frame->addWidget(y_box_4);

        y_box_5 = new QSpinBox(layoutWidget);
        y_box_5->setObjectName("y_box_5");
        y_box_5->setMinimum(-99999);
        y_box_5->setMaximum(99999);

        y_frame->addWidget(y_box_5);

        y_box_6 = new QSpinBox(layoutWidget);
        y_box_6->setObjectName("y_box_6");
        y_box_6->setMinimum(-99999);
        y_box_6->setMaximum(99999);

        y_frame->addWidget(y_box_6);


        inputs_frame->addLayout(y_frame);

        m_frame = new QVBoxLayout();
        m_frame->setObjectName("m_frame");
        m_label = new QLabel(layoutWidget);
        m_label->setObjectName("m_label");

        m_frame->addWidget(m_label, 0, Qt::AlignHCenter);

        m_box_1 = new QDoubleSpinBox(layoutWidget);
        m_box_1->setObjectName("m_box_1");
        m_box_1->setMaximum(999999.989999999990687);
        m_box_1->setValue(0.000000000000000);

        m_frame->addWidget(m_box_1);

        m_box_2 = new QDoubleSpinBox(layoutWidget);
        m_box_2->setObjectName("m_box_2");
        m_box_2->setMaximum(999999.989999999990687);
        m_box_2->setValue(0.000000000000000);

        m_frame->addWidget(m_box_2);

        m_box_3 = new QDoubleSpinBox(layoutWidget);
        m_box_3->setObjectName("m_box_3");
        m_box_3->setMaximum(999999.989999999990687);
        m_box_3->setValue(0.000000000000000);

        m_frame->addWidget(m_box_3);

        m_box_4 = new QDoubleSpinBox(layoutWidget);
        m_box_4->setObjectName("m_box_4");
        m_box_4->setMaximum(999999.989999999990687);

        m_frame->addWidget(m_box_4);

        m_box_5 = new QDoubleSpinBox(layoutWidget);
        m_box_5->setObjectName("m_box_5");
        m_box_5->setMaximum(999999.989999999990687);

        m_frame->addWidget(m_box_5);

        m_box_6 = new QDoubleSpinBox(layoutWidget);
        m_box_6->setObjectName("m_box_6");
        m_box_6->setMaximum(999999.989999999990687);

        m_frame->addWidget(m_box_6);


        inputs_frame->addLayout(m_frame);

        r_frame = new QVBoxLayout();
        r_frame->setObjectName("r_frame");
        r_label = new QLabel(layoutWidget);
        r_label->setObjectName("r_label");

        r_frame->addWidget(r_label, 0, Qt::AlignHCenter);

        r_box_1 = new QSpinBox(layoutWidget);
        r_box_1->setObjectName("r_box_1");
        r_box_1->setMaximum(99999999);
        r_box_1->setValue(0);

        r_frame->addWidget(r_box_1);

        r_box_2 = new QSpinBox(layoutWidget);
        r_box_2->setObjectName("r_box_2");
        r_box_2->setMaximum(99999999);
        r_box_2->setValue(0);
        r_box_2->setDisplayIntegerBase(10);

        r_frame->addWidget(r_box_2);

        r_box_3 = new QSpinBox(layoutWidget);
        r_box_3->setObjectName("r_box_3");
        r_box_3->setMaximum(99999999);
        r_box_3->setValue(0);

        r_frame->addWidget(r_box_3);

        r_box_4 = new QSpinBox(layoutWidget);
        r_box_4->setObjectName("r_box_4");
        r_box_4->setMaximum(99999999);

        r_frame->addWidget(r_box_4);

        r_box_5 = new QSpinBox(layoutWidget);
        r_box_5->setObjectName("r_box_5");
        r_box_5->setMaximum(99999999);

        r_frame->addWidget(r_box_5);

        r_box_6 = new QSpinBox(layoutWidget);
        r_box_6->setObjectName("r_box_6");
        r_box_6->setMaximum(99999999);

        r_frame->addWidget(r_box_6);


        inputs_frame->addLayout(r_frame);

        vx_frame = new QVBoxLayout();
        vx_frame->setObjectName("vx_frame");
        vx_label = new QLabel(layoutWidget);
        vx_label->setObjectName("vx_label");

        vx_frame->addWidget(vx_label, 0, Qt::AlignHCenter);

        vx_box_1 = new QDoubleSpinBox(layoutWidget);
        vx_box_1->setObjectName("vx_box_1");
        vx_box_1->setMinimum(-999999.989999999990687);
        vx_box_1->setMaximum(999999.989999999990687);
        vx_box_1->setValue(0.000000000000000);

        vx_frame->addWidget(vx_box_1);

        vx_box_2 = new QDoubleSpinBox(layoutWidget);
        vx_box_2->setObjectName("vx_box_2");
        vx_box_2->setMinimum(-999999.989999999990687);
        vx_box_2->setMaximum(999999.989999999990687);
        vx_box_2->setValue(0.000000000000000);

        vx_frame->addWidget(vx_box_2);

        vx_box_3 = new QDoubleSpinBox(layoutWidget);
        vx_box_3->setObjectName("vx_box_3");
        vx_box_3->setMinimum(-999999.989999999990687);
        vx_box_3->setMaximum(999999.989999999990687);
        vx_box_3->setValue(0.000000000000000);

        vx_frame->addWidget(vx_box_3);

        vx_box_4 = new QDoubleSpinBox(layoutWidget);
        vx_box_4->setObjectName("vx_box_4");
        vx_box_4->setMinimum(-999999.989999999990687);
        vx_box_4->setMaximum(999999.989999999990687);
        vx_box_4->setValue(0.000000000000000);

        vx_frame->addWidget(vx_box_4);

        vx_box_5 = new QDoubleSpinBox(layoutWidget);
        vx_box_5->setObjectName("vx_box_5");
        vx_box_5->setMinimum(-999999.989999999990687);
        vx_box_5->setMaximum(999999.989999999990687);
        vx_box_5->setValue(0.000000000000000);

        vx_frame->addWidget(vx_box_5);

        vx_box_6 = new QDoubleSpinBox(layoutWidget);
        vx_box_6->setObjectName("vx_box_6");
        vx_box_6->setMinimum(-999999.989999999990687);
        vx_box_6->setMaximum(999999.989999999990687);
        vx_box_6->setValue(0.000000000000000);

        vx_frame->addWidget(vx_box_6);


        inputs_frame->addLayout(vx_frame);

        vy_frame = new QVBoxLayout();
        vy_frame->setObjectName("vy_frame");
        vy_label = new QLabel(layoutWidget);
        vy_label->setObjectName("vy_label");

        vy_frame->addWidget(vy_label, 0, Qt::AlignHCenter);

        vy_box_1 = new QDoubleSpinBox(layoutWidget);
        vy_box_1->setObjectName("vy_box_1");
        vy_box_1->setMinimum(-999999.989999999990687);
        vy_box_1->setMaximum(999999.989999999990687);
        vy_box_1->setValue(0.000000000000000);

        vy_frame->addWidget(vy_box_1);

        vy_box_2 = new QDoubleSpinBox(layoutWidget);
        vy_box_2->setObjectName("vy_box_2");
        vy_box_2->setMinimum(-999999.989999999990687);
        vy_box_2->setMaximum(999999.989999999990687);
        vy_box_2->setValue(0.000000000000000);

        vy_frame->addWidget(vy_box_2);

        vy_box_3 = new QDoubleSpinBox(layoutWidget);
        vy_box_3->setObjectName("vy_box_3");
        vy_box_3->setMinimum(-999999.989999999990687);
        vy_box_3->setMaximum(999999.989999999990687);
        vy_box_3->setValue(0.000000000000000);

        vy_frame->addWidget(vy_box_3);

        vy_box_4 = new QDoubleSpinBox(layoutWidget);
        vy_box_4->setObjectName("vy_box_4");
        vy_box_4->setMinimum(-999999.989999999990687);
        vy_box_4->setMaximum(999999.989999999990687);
        vy_box_4->setValue(0.000000000000000);

        vy_frame->addWidget(vy_box_4);

        vy_box_5 = new QDoubleSpinBox(layoutWidget);
        vy_box_5->setObjectName("vy_box_5");
        vy_box_5->setMinimum(-999999.989999999990687);
        vy_box_5->setMaximum(999999.989999999990687);
        vy_box_5->setValue(0.000000000000000);

        vy_frame->addWidget(vy_box_5);

        vy_box_6 = new QDoubleSpinBox(layoutWidget);
        vy_box_6->setObjectName("vy_box_6");
        vy_box_6->setMinimum(-999999.989999999990687);
        vy_box_6->setMaximum(999999.989999999990687);
        vy_box_6->setValue(0.000000000000000);

        vy_frame->addWidget(vy_box_6);


        inputs_frame->addLayout(vy_frame);

        speed_frame = new QVBoxLayout();
        speed_frame->setObjectName("speed_frame");
        speed_label = new QLabel(layoutWidget);
        speed_label->setObjectName("speed_label");

        speed_frame->addWidget(speed_label, 0, Qt::AlignHCenter);

        speed_slider_frame = new QHBoxLayout();
        speed_slider_frame->setObjectName("speed_slider_frame");
        speed_slider = new QSlider(layoutWidget);
        speed_slider->setObjectName("speed_slider");
        speed_slider->setMinimum(1);
        speed_slider->setMaximum(20);
        speed_slider->setPageStep(1);
        speed_slider->setValue(10);
        speed_slider->setSliderPosition(10);
        speed_slider->setTracking(false);
        speed_slider->setOrientation(Qt::Vertical);
        speed_slider->setInvertedAppearance(true);
        speed_slider->setInvertedControls(true);

        speed_slider_frame->addWidget(speed_slider, 0, Qt::AlignHCenter);


        speed_frame->addLayout(speed_slider_frame);


        inputs_frame->addLayout(speed_frame);


        verticalLayout->addLayout(inputs_frame);

        buttons_frame = new QHBoxLayout();
        buttons_frame->setObjectName("buttons_frame");
        start_button = new QPushButton(layoutWidget);
        start_button->setObjectName("start_button");
        start_button->setText(QString::fromUtf8("Iniciar"));

        buttons_frame->addWidget(start_button);

        stop_button = new QPushButton(layoutWidget);
        stop_button->setObjectName("stop_button");

        buttons_frame->addWidget(stop_button);

        pause_button = new QPushButton(layoutWidget);
        pause_button->setObjectName("pause_button");
        pause_button->setText(QString::fromUtf8("Pausar"));

        buttons_frame->addWidget(pause_button);

        resume_button = new QPushButton(layoutWidget);
        resume_button->setObjectName("resume_button");
        resume_button->setText(QString::fromUtf8("Reanudar"));

        buttons_frame->addWidget(resume_button);


        verticalLayout->addLayout(buttons_frame);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(860, 60, 151, 106));
        save_layout = new QVBoxLayout(layoutWidget1);
        save_layout->setObjectName("save_layout");
        save_layout->setContentsMargins(0, 0, 0, 0);
        Export_button = new QPushButton(layoutWidget1);
        Export_button->setObjectName("Export_button");

        save_layout->addWidget(Export_button);

        Import_button = new QPushButton(layoutWidget1);
        Import_button->setObjectName("Import_button");

        save_layout->addWidget(Import_button);

        save_label = new QLabel(layoutWidget1);
        save_label->setObjectName("save_label");

        save_layout->addWidget(save_label);

        save_box = new QCheckBox(layoutWidget1);
        save_box->setObjectName("save_box");

        save_layout->addWidget(save_box);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1018, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        name_label->setText(QCoreApplication::translate("MainWindow", "Datos", nullptr));
        name_box_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        name_box_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        name_box_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        name_box_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        name_box_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        color_label->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        color_1->setItemText(0, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        color_1->setItemText(1, QCoreApplication::translate("MainWindow", "Azul", nullptr));
        color_1->setItemText(2, QCoreApplication::translate("MainWindow", "Rojo", nullptr));
        color_1->setItemText(3, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        color_1->setItemText(4, QCoreApplication::translate("MainWindow", "Verde", nullptr));
        color_1->setItemText(5, QCoreApplication::translate("MainWindow", "Negro", nullptr));

        color_2->setItemText(0, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        color_2->setItemText(1, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        color_2->setItemText(2, QCoreApplication::translate("MainWindow", "Red", nullptr));
        color_2->setItemText(3, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        color_2->setItemText(4, QCoreApplication::translate("MainWindow", "Green", nullptr));
        color_2->setItemText(5, QCoreApplication::translate("MainWindow", "Black", nullptr));

        color_3->setItemText(0, QCoreApplication::translate("MainWindow", "Red", nullptr));
        color_3->setItemText(1, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        color_3->setItemText(2, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        color_3->setItemText(3, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        color_3->setItemText(4, QCoreApplication::translate("MainWindow", "Green", nullptr));
        color_3->setItemText(5, QCoreApplication::translate("MainWindow", "Black", nullptr));

        color_4->setItemText(0, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        color_4->setItemText(1, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        color_4->setItemText(2, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        color_4->setItemText(3, QCoreApplication::translate("MainWindow", "Red", nullptr));
        color_4->setItemText(4, QCoreApplication::translate("MainWindow", "Green", nullptr));
        color_4->setItemText(5, QCoreApplication::translate("MainWindow", "Black", nullptr));

        color_5->setItemText(0, QCoreApplication::translate("MainWindow", "Green", nullptr));
        color_5->setItemText(1, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        color_5->setItemText(2, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        color_5->setItemText(3, QCoreApplication::translate("MainWindow", "Red", nullptr));
        color_5->setItemText(4, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        color_5->setItemText(5, QCoreApplication::translate("MainWindow", "Black", nullptr));

        color_6->setItemText(0, QCoreApplication::translate("MainWindow", "Black", nullptr));
        color_6->setItemText(1, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        color_6->setItemText(2, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        color_6->setItemText(3, QCoreApplication::translate("MainWindow", "Red", nullptr));
        color_6->setItemText(4, QCoreApplication::translate("MainWindow", "Magenta", nullptr));
        color_6->setItemText(5, QCoreApplication::translate("MainWindow", "Green", nullptr));

        x_label->setText(QCoreApplication::translate("MainWindow", "X inicial", nullptr));
        y_label->setText(QCoreApplication::translate("MainWindow", "Y inicial", nullptr));
        m_label->setText(QCoreApplication::translate("MainWindow", "Masa", nullptr));
        r_label->setText(QCoreApplication::translate("MainWindow", "Radio", nullptr));
        vx_label->setText(QCoreApplication::translate("MainWindow", "Inicial Vx", nullptr));
        vy_label->setText(QCoreApplication::translate("MainWindow", "Inicial Vy", nullptr));
        speed_label->setText(QCoreApplication::translate("MainWindow", "Velocidad", nullptr));
        stop_button->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
        Export_button->setText(QCoreApplication::translate("MainWindow", "Exportar", nullptr));
        Import_button->setText(QCoreApplication::translate("MainWindow", "Importar", nullptr));
        save_label->setText(QString());
        save_box->setText(QCoreApplication::translate("MainWindow", "Guardar posiciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
