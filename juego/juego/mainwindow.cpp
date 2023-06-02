#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene;

    escena->setSceneRect(0,0,ui->graphicsView->width()-5, ui->graphicsView->height()-5); //dimención
    ui->graphicsView->setScene(escena);//carga escena sobre el graphicsview


}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
}

