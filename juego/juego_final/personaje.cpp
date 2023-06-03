#include "personaje.h"


int gato::getX() const
{
    return x;
}

void gato::setX(int value)
{
    x = value;
}

int gato::getY() const
{
    return y;
}

void gato::setY(int value)
{
    y = value;
}

gato::gato(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/imagenes/gato/Gw.png"));
}

void gato::posicion()
{
    setPos(x,y);
}

void gato::posicion(int x_1, int y_1)
{
    x = x_1;
    y = y_1;
    setPos(x_1,y_1);
}
