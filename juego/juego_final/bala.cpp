#include "bala.h"
#include <QObject>

bala::bala()
{
    imagenBala = QPixmap(":/imagenes/UNSC/bala.png");
    setPixmap(imagenBala);

    timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(mover()));
    timer->start(10);
}

int bala::getPosX() const
{
    return posY;
}

int bala::getPosY() const
{
    return posY;
}






void bala::mover()
{


    //double tiempo = 0.01;  // Incremento de tiempo (puedes ajustar este valor según tus necesidades)
    //double velocidadFinal = velocidadInicial + aceleracion * tiempo;

    // Mover la bala según la velocidad final calculada
   // setPos(x() + velocidadFinal, y());
    // Mover la bala horizontalmente en el eje X

    setPos(x() + 5, y()); // Puedes ajustar la velocidad cambiando el valor de 1
}

void bala::setDireccion(int velocidadInicial)
{
    this->velocidadInicial= velocidadInicial;
}
