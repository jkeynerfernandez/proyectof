#include "muro_destruible.h"
#include <QGraphicsScene>

int muro_destruible::getPosx() const
{
    return posx;
}

int muro_destruible::getPosy() const
{
    return posy;
}

muro_destruible::muro_destruible()
{

}

muro_destruible::muro_destruible(int posx, int posy, int w, int h)
{
    this->posx=posx;
    this->posy=posy;
    this->w=w;
    this->h=h;
}

muro_destruible::~muro_destruible()
{
 scene()->removeItem(this);
}

QRectF muro_destruible::boundingRect() const
{
    return QRectF(posx, posy, w, h);
}

void muro_destruible::paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget)
{
    QPixmap pxmap(":/new/Images/Images/muro_destruible.png");

    painter->drawPixmap(boundingRect(),pxmap, pxmap.rect());
}
