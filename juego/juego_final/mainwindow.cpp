#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "naveEnemigo.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,ui->marcoVisualdeljuego->width()-5, ui->marcoVisualdeljuego->height()-5);//area de mapa
    ui->marcoVisualdeljuego->setScene(scene);
    //generarEnemigos();

    for (int i = 0; i < 3; i++) {
        NaveEnemigo* enemigo = new NaveEnemigo();
        enemigo->posicion(300,200);

        scene->addItem(enemigo);//la forcé
        enemigos.append(enemigo);//la forcé
    }








    ui->marcoVisualdeljuego->setBackgroundBrush(QBrush((QImage(":/imagenes/escenario/fondo.png"))));


   // pelota = new mov_parabolico(0,-300,60,1.04);
    //scene->addItem(pelota);

    UNSC = new nave();
    scene->addItem(UNSC);
    UNSC->posicion(200,200);



    timer = new QTimer();
    timer->start(10);
   // timer->stop();

    //connect(timer, SIGNAL(timeout()),this,SLOT(hmov()));
    connect(timer,SIGNAL(timeout()),this,SLOT(ActualizarVidas()));

//    void generarEnemigos() {
//        for (int i = 0; i < 3; i++) {
//            NaveEnemigo* enemigo = new NaveEnemigo();
//            enemigo->posicion(300,200);

//            scene->addItem(enemigo);
//            enemigos.append(enemigo);
//        }
//    }


}
//void generarEnemigos() {
//    for (int i = 0; i < 3; i++) {
//        NaveEnemigo* enemigo = new NaveEnemigo();
//        enemigo->posicion(300,200);

//        scene->addItem(enemigo);//la forcé
//        this.enemigos.append(enemigo);//la forcé
//    }
//}


MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
    delete timer;
    delete time;
    delete tempo;
}
//___ACCIONES DE LOS PERSONAJES __________________________

bool  Up, Down, Right, Left, U,D,L,R;
void MainWindow::keyPressEvent(QKeyEvent *evento)
{


//___________________movimiento de UNSC_______________________________
    if(evento->key()==Qt::Key_W)
    {
        UNSC->MoveUp();

        }

    else if(evento->key()==Qt::Key_S)
    {
        UNSC->MoveDown();


       }

    else if(evento->key()==Qt::Key_D)
    {
        UNSC->MoveRight();


        }

    else if(evento->key()==Qt::Key_A)
    {
        UNSC->MoveLeft();
    }
    UNSC->posicion();

 //__________________movimiento de enemigo_______________________________

        //{
//            if((UNSC)->collidesWithItem(enemigos)){



//                //descontar vida___
//                 UNSC->setVidas(UNSC->getVidas()-1);
//                connect(timer,SIGNAL(timeout()),this,SLOT(ActualizarVidas()));
//                //_________________
//                connect(tempo,&QTimer::timeout,this,&::MainWindow::EliminarFantasma);


//                 UNSC->posicion(200,200);

//            }
//            }


//        if(evento->key()==Qt::Key_Space)
//        {
//       //si enemigo mira para la derecha ang 1, para la izquierda 2
//            if(COVENANT->getDireccion()==70){

//             pelota = new mov_parabolico(COVENANT->getX(),-COVENANT->getY(),150,2);
//            }else if(COVENANT->getDireccion()==35){
//            pelota = new mov_parabolico(COVENANT->getX(),-COVENANT->getY(),150,1);}

//            scene->addItem(pelota);
//            time = new QTimer();
//            time->start(60);
//            timer->start(1000);
//            connect(time,SIGNAL(timeout()),this,SLOT(ActualizarPosicion()));
//            connect(timer, SIGNAL(timeout()), this, SLOT(EliminarPelota()));
//        }


        //COVENANT->posicion();
}

//hilo = new QThread();


void MainWindow::keyRelease(QKeyEvent *evento){
    if(evento->type()==QEvent::KeyRelease){
      if(((QKeyEvent*)evento)->key()==Qt::Key_W){Up = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_S){Down = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_A){Left = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_D){Right = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_I){U = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_K){D = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_J){L = false;}
       else if(((QKeyEvent*)evento)->key()==Qt::Key_L){R = false;}
    }

}
void MainWindow::ActualizarVidas()
{

    int vidasRestantes;
    vidasRestantes = UNSC->getVidas();
    ui->vidas->display(vidasRestantes);
    if (vidasRestantes==0){
   ui->marcoVisualdeljuego->setForegroundBrush(QBrush((QImage(":/imagenes/escenario/gameover.png"))));
   scene->removeItem(UNSC);

    }

}

bool MainWindow::EvaluarColision(QVector<QGraphicsItem*>vec)
{

//    QVector<QGraphicsItem*>::Iterator it;
//    for(it=vec.begin(); it!=vec.end(); it++)
//    {
//        if((*it)->collidesWithItem(UNSC) || (*it)->collidesWithItem(COVENANT))
//            return true;}
//    return false;
}

//bool MainWindow::EvaluarColisionenemigo(QVector<QGraphicsItem*>vec)
//{

//    QVector<QGraphicsItem*>::Iterator it;
//    for(it=vec.begin(); it!=vec.end(); it++)
//    {
//        if((*it)->collidesWithItem(COVENANT))
//            return true;}
//    return false;
//}


//void generarEnemigos() {
//    for (int i = 0; i < 3; i++) {
//        NaveEnemigo* enemigo = new NaveEnemigo();
//        enemigo->posicion(300,200);

//        scene->addItem(enemigo);
//        enemigos.append(enemigo);
//    }
//}

//_______________pelota__________________
void MainWindow::ActualizarPosicion()
{
    pelota->CalcularVelocidad();
    pelota->CalcularPosicion();
    pelota->ActualizarVelocidad();
    if(pelota->getPosy()>0)
       time->stop();
}


void MainWindow::EliminarPelota()
{
int timep=0;
timep++;
if(timep==100000);
//if(pelota->getPosx()==-(UNSC->getX()+200)){
scene->removeItem(pelota);}

void MainWindow::EliminarFantasma()
{
    /*int timep=0;
    timep++;
    if(timep==5);*/

}

void MainWindow::on_pushButton_clicked()
{


    //if(time->isActive()) time->stop();

}

