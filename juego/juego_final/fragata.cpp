#include "fragata.h"
#include <QGraphicsPixmapItem>


fragata::fragata(QGraphicsItem* parent) :  QGraphicsPixmapItem(parent)

{
    QPixmap pixmap(":/imagenes/UNSC/fragata.png");
    setPixmap(pixmap);


    //connect(this, &fragata::destruido, this, &fragata::manejarDestruccion);
}

int fragata::getX() const
{
    return x;
}

void fragata::setX(int value)
{
    x = value;
}

int fragata::getY() const
{
    return y;
}

void fragata::setY(int value)
{
    y = value;
}

void fragata::posicion()
{
    setPos(x,y);
}

void fragata::posicion(int x_1, int y_1)
{
    x = x_1;
    y = y_1;
    setPos(x_1,y_1);
}

int fragata::getVidas() const
{
    return vidas;

}

void fragata::setVidas(int newVidas)
{
    vidas = newVidas;
}
