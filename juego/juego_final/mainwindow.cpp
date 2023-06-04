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

   // generarEnemigos();

       // Conectar temporizador al método ActualizarPosicion()
    connect(timer, &QTimer::timeout, this, &MainWindow::ActualizarPosicion);

    ui->marcoVisualdeljuego->setBackgroundBrush(QBrush((QImage(":/imagenes/escenario/fondo.png"))));


   // pelota = new mov_parabolico(0,-300,60,1.04);
    //scene->addItem(pelota);

    UNSC = new nave();
    scene->addItem(UNSC);
    UNSC->posicion(200,200);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::ActualizarPosicion); // Conecta el temporizador al método ActualizarPosicion()
    timer ->start(100);

    generarNavesEnemigas();
    ActualizarPosicion();



    timer = new QTimer();
    timer->start(10);
   // timer->stop();

    //connect(timer, SIGNAL(timeout()),this,SLOT(hmov()));
    connect(timer,SIGNAL(timeout()),this,SLOT(ActualizarVidas()));




}


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




}




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

void MainWindow::generarNavesEnemigas()
{
    // Eliminar las naves enemigas existentes
        foreach (NaveEnemigo *enemigo, navesEnemigas) {
            scene->removeItem(enemigo);
            delete enemigo;
        }
        navesEnemigas.clear();

        // Generar nuevas naves enemigas
        int numNaves = 3;
        for (int i = 0; i < numNaves; ++i) {
            NaveEnemigo *enemigo = new NaveEnemigo();
            // Establecer las posiciones aleatorias para cada nave enemiga
            int x = QRandomGenerator::global()->bounded(1000 - enemigo->boundingRect().width());
            int y = rand() % static_cast<int>(500 - enemigo->boundingRect().height());

            enemigo->setPos(x, y);
            scene->addItem(enemigo);
            navesEnemigas.append(enemigo);


        }
}
void MainWindow::ActualizarPosicion()
{


    for (NaveEnemigo *enemigo : navesEnemigas) {
        enemigo->moveBy(-6, 0); // Ajusta la velocidad de desplazamiento según tus necesidades
        if (enemigo->pos().x() + enemigo->boundingRect().width() < 0) {
                    // Eliminar la nave enemiga de la escena
                    scene->removeItem(enemigo);
                    navesEnemigas.removeOne(enemigo);
                    delete enemigo;
                }
        if (navesEnemigas.isEmpty()) {
                generarNavesEnemigas();
            }

    }



//    pelota->CalcularVelocidad();
//    pelota->CalcularPosicion();
//    pelota->ActualizarVelocidad();
//    if(pelota->getPosy()>0)
//       time->stop();
}

















