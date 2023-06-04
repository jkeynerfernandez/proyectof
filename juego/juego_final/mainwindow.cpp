#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "naveEnemigo.h"
#include "bala.h"
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

//    time = new QTimer(this);
//    connect(time, &QTimer::timeout, this, &MainWindow::ActualizarPosicionBala); // Conecta el temporizador a la ranura
//    time->start(10);
    //bala= new mov_parabolico(0,-300,30,0);
    //bala *nuevabala  = new bala();



    timer = new QTimer(this);
    timer ->start(100);
    connect(timer, &QTimer::timeout, this, &MainWindow::ActualizarPosicion); // Conecta el temporizador al método ActualizarPosicion()
    generarNavesEnemigas();

   // generarNavesEnemigas();
    ActualizarPosicion();





//    timer = new QTimer();
//    timer->start(10);
   // timer->stop();

   // time = new QTimer(this);
    //connect(time, &QTimer::timeout, this, &MainWindow::ActualizarPosicionBala);

  //  connect(time, SIGNAL(timeout()), this, SLOT(EliminarBala()));

    //connect(timer, SIGNAL(timeout()),this,SLOT(hmov()));
   // connect(timer,SIGNAL(timeout()),this,SLOT(ActualizarVidas()));
//connect(time, &QTimer::timeout, this, &MainWindow::ActualizarPosicionBala); // Conecta el temporizador a la ranura
    //connect(time, &QTimer::timeout, this, &MainWindow::EliminarBala);




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

    else if(evento->key()==Qt::Key_P ){

        nuevabala = new bala();
        scene->addItem(nuevabala);
        nuevabala->setPos(UNSC->getX() + UNSC->boundingRect().width() / 2, UNSC->getY());

        tiempoparaevaluarcolision= new QTimer(this);
        tiempoparaevaluarcolision->start(10);
        connect(tiempoparaevaluarcolision, &QTimer::timeout, this, &MainWindow::EvaluarColision);//porizador al método ActualizarPosicion()


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

void MainWindow::EvaluarColision()
{
    QList<NaveEnemigo*> navesEliminadas;
    foreach (NaveEnemigo *enemigo, navesEnemigas) {
            if (nuevabala->collidesWithItem(enemigo)) {
                // Colisión detectada, eliminar la bala y la nave enemiga
                navesEliminadas.append(enemigo);
                scene->removeItem(nuevabala);
                delete nuevabala;
                break;
               // tiempoparaevaluarcolision->stop();

              // tiempoparaevaluarcolision->stop();
                 // Salir del bucle para evitar colisiones múltiples en el mismo paso de tiempo
            }
    }

    foreach (NaveEnemigo *enemigoEliminado, navesEliminadas) {
        scene->removeItem(enemigoEliminado);
        navesEnemigas.removeOne(enemigoEliminado);
        delete enemigoEliminado;
    }


                // Detener el temporizador después de evaluar la colisión
    tiempoparaevaluarcolision->stop();

    if (navesEnemigas.isEmpty()) {
           generarNavesEnemigas();
       }

                //tiempoparaevaluarcolision->stop();
}
//    QVector<QGraphicsItem*>::Iterator it;
//    for(it=vec.begin(); it!=vec.end(); it++)
//    {
//        if((*it)->collidesWithItem(UNSC) || (*it)->collidesWithItem(COVENANT))
//            return true;}
//    return false;




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
            int x = QRandomGenerator::global()->bounded( 1000- enemigo->boundingRect().width());
            int y = rand() % static_cast<int>(500 - enemigo->boundingRect().height());

            enemigo->setPos(x, y);
            scene->addItem(enemigo);
            navesEnemigas.append(enemigo);


        }
}
void MainWindow::CrearBala()
{
    // Crear una nueva bala con velocidad inicial y aceleración
  //  double velocidadInicial = 10.0;  // Ajusta este valor según la velocidad inicial deseada
   // double aceleracion = 0.5;  // Ajusta este valor según la aceleración deseada
 //   nuevabala = new bala(velocidadInicial, aceleracion);

 //   nuevabala->setPos(UNSC->getX() + UNSC->boundingRect().width() / 2, UNSC->getY() + UNSC->boundingRect().height() / 2);

 //   balas.append(nuevabala);
 //   scene->addItem(nuevabala);
   // balas.append(nuevabala);

//    connect(time, &QTimer::timeout, this, &MainWindow::ActualizarPosicionBala);
    //time->start(10);

    // Resto del código...
}


void MainWindow::ActualizarPosicion()
{

     QList<NaveEnemigo*> navesEliminadas;
    for (NaveEnemigo *enemigo : navesEnemigas) {
        enemigo->moveBy(-6, 0); // Ajusta la velocidad de desplazamiento según tus necesidades
        if (enemigo->pos().x() + enemigo->boundingRect().width() < 0) {
                    // Eliminar la nave enemiga de la escena
            scene->removeItem(enemigo);
            navesEnemigas.removeOne(enemigo);
            delete enemigo;
        }

        for (NaveEnemigo* enemigoEliminado : navesEliminadas) {
              navesEnemigas.removeOne(enemigoEliminado);
              delete enemigoEliminado;
          }

        if (navesEnemigas.isEmpty()) {
                generarNavesEnemigas();
            }



//        if (nuevabala->pos().x() + nuevabala->boundingRect().width() < 0) {
//                    // Eliminar la nave enemiga de la escena
//                    scene->removeItem(nuevabala);
//                    navesEnemigas.removeOne(nuevabala);
//                    delete nuevabala;
//                }
    }}

void MainWindow::ReiniciarPosicionUNSC()
{
    UNSC->posicion(200, 200);
}

void MainWindow::ActualizarPosicionBala()
{
    nuevabala->mover();




       // Verificar si la bala ha superado el límite derecho de la escena
       if (nuevabala->x() > scene->sceneRect().right()) {
           scene->removeItem(nuevabala);
           delete nuevabala;
           nuevabala = nullptr;  // Establecer el puntero a nullptr para evitar accesos no deseados
           time->stop();  // Detener el temporizador si se elimina la bala
       }


//       nuevabala->CalcularPosicion();
//       nuevabala->ActualizarVelocidad();
//       if(nuevabala->getPosy()>0){
//        time->stop();}

}

void MainWindow::EliminarBala()
{

}



















