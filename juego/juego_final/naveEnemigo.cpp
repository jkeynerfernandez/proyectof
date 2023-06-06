#include "naveEnemigo.h"
#include "mainwindow.h"


void inicializarValores();


NaveEnemigo::NaveEnemigo(QObject *parent):nave(parent)
{
    pixmap= new QPixmap(":/imagenes/enemigo/enemigo.png");


    connect(this, &NaveEnemigo::destruido, this, &NaveEnemigo::manejarDestruccion);




}



void NaveEnemigo::Disparar()
{

    bala* nuevaBala = new bala();
    scene()->addItem(nuevaBala);
    nuevaBala->setPos(getX() + boundingRect().width() / 2, getY());





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

