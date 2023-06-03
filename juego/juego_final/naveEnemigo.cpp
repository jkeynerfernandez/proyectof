#include "naveEnemigo.h"

//enemigo::enemigo(QObject *parent)

//{
//    pixmap = new QPixmap(":/imagenes/enemigo/sprite1.png");

//}

//void enemigo::run()
//{

//}



NaveEnemigo::NaveEnemigo(QObject *parent):nave(parent)
{
    pixmap= new QPixmap(":/imagenes/perro/enemigo.png");  // Ruta de la imagen del enemigo

           // Conectar la señal de destrucción a la ranura correspondiente
    connect(this, &NaveEnemigo::destruido, this, &NaveEnemigo::manejarDestruccion);
 //   connect(this, SIGNAL(destruido()), this, SLOT(manejarDestruccion());
}

void NaveEnemigo::manejarDestruccion()
{
    // Eliminar el enemigo de la escena y de la lista de enemigos
         scene()->removeItem(this);
         enemigos.removeOne(this);
         delete this;

         // Verificar si todos los enemigos han sido destruidos
//         if (enemigos.isEmpty()) {
//             // Generar un nuevo grupo de enemigos
//             generarnaveEnemigos();
//         }
     }

