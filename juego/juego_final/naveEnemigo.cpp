#include "naveEnemigo.h"
#include "mainwindow.h"

//enemigo::enemigo(QObject *parent)

//{
//    pixmap = new QPixmap(":/imagenes/enemigo/sprite1.png");

//}

//void enemigo::run()
//{

//}
void inicializarValores();


NaveEnemigo::NaveEnemigo(QObject *parent):nave(parent)
{
    pixmap= new QPixmap(":/imagenes/enemigo/enemigo.png");  // Ruta de la imagen del enemigo

           // Conectar la señal de destrucción a la ranura correspondiente
    connect(this, &NaveEnemigo::destruido, this, &NaveEnemigo::manejarDestruccion);
    //   connect(this, SIGNAL(destruido()), this, SLOT(manejarDestruccion());


    //inicializarValores();
}



void NaveEnemigo::Disparar()
{

    bala* nuevaBala = new bala();
    scene()->addItem(nuevaBala);
    nuevaBala->setPos(getX() + boundingRect().width() / 2, getY());


    //nuevaBala->setDireccion(1);


}








void NaveEnemigo::manejarDestruccion()
{
    // Eliminar el enemigo de la escena y de la lista de enemigos
        scene()->removeItem(this);
        enemigos.removeOne(this);
        delete this;

        // Verificar si todos los enemigos han sido destruidos
        if (enemigos.isEmpty()) {
            // Generar un nuevo grupo de enemigos
            MainWindow *mainWindow = dynamic_cast<MainWindow*>(scene()->parent());
            if (mainWindow) {
                mainWindow->generarNavesEnemigas();
            }
        }
     }

