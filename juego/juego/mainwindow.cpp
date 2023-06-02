#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //crear personaje
    personaje =new nave (":/../imagenes/personaje.png");
    personaje->setPos(0,0); //x,y

    //crear enemigos
    enemigo[0]= new naveenemigo (":/../imagenes/enemigo.png");
    enemigo[0]->setPos(200,150);
    enemigo[1]= new naveenemigo (":/../imagenes/enemigo.png");
    enemigo[1]->setPos(250,150);
    enemigo[2]= new naveenemigo (":/../imagenes/enemigo.png");
    enemigo[2]->setPos(300,150);



    escena = new QGraphicsScene;

    escena->setSceneRect(0,0,ui->graphicsView->width()-5, ui->graphicsView->height()-5); //dimención
    escena->addItem(personaje); //agrega personaje a la escena
    escena->addItem(enemigo[0]);
    escena->addItem(enemigo[1]);
    escena->addItem(enemigo[2]);
    ui->graphicsView->setScene(escena);//carga escena sobre el graphicsview


}

MainWindow::~MainWindow()
{
    delete ui;
    delete escena;
}

