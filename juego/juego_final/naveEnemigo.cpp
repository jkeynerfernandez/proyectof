#include "naveEnemigo.h"

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
    pixmap= new QPixmap(":/imagenes/perro/enemigo.png");  // Ruta de la imagen del enemigo

           // Conectar la señal de destrucción a la ranura correspondiente
    connect(this, &NaveEnemigo::destruido, this, &NaveEnemigo::manejarDestruccion);
    //   connect(this, SIGNAL(destruido()), this, SLOT(manejarDestruccion());

    //inicializarValores();
}

//void NaveEnemigo::inicializarValores()
//{
//    velocidad = rand() % (velocidadMaxima - velocidadMinima + 1) + velocidadMinima;
//    posicionInicialX = rand() % (posXMaxima - posXMinima + 1) + posXMinima;
//    setX(posicionInicialX);
//}

//void NaveEnemigo::move()
//{
//    setX(getX() - velocidad);
//    setPos(getX(), getY());

//           // Verificar si la nave enemiga ha salido de la escena
//    if (getX() + ancho < 0) {
//    emit destruido(); // Emitir señal de destrucción
//    }
//}

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

