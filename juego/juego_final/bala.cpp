#include "bala.h"
#include <QObject>

bala::bala()
{
    imagenBala = QPixmap(":/imagenes/UNSC/bala.png");
    setPixmap(imagenBala);

    timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(mover()));
    timer->start(10);

    setFlag(QGraphicsItem::ItemIsMovable);

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


    double tiempo=0.01;
    double aceleracion=1.0;

    double velocidadInicial= 250.0;
    double velocidadFinal= velocidadInicial + (aceleracion*tiempo);
    double desplazamiento =(velocidadInicial + velocidadFinal)*tiempo/2.0;


    setPos(x() + desplazamiento, y());
}

void bala::setDireccion(int velocidadInicial)
{
    this->velocidadInicial= velocidadInicial;
}
