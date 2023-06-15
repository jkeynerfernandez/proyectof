#include "puerta_llave.h"

Puerta_llave::Puerta_llave()
{

}

Puerta_llave::Puerta_llave(int posx, int posy)
{
    this->posx=posx;
    this->posy=posy;
    w=34;
    h=34;
}

QRectF Puerta_llave::boundingRect() const
{
   return QRectF(posx, posy, w, h);
}

void Puerta_llave::paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget)
{
    QPixmap pxmap(":/new/Images/Images/puerta.png");

    painter->drawPixmap(boundingRect(),pxmap, pxmap.rect());
}
