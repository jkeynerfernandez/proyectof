#include "obstaculo_cuadrito.h"

/*obstaculo_cuadrito::obstaculo_cuadrito(QObject *parent)
    : QObject{parent}
{

}*/

QRectF obstaculo_cuadrito::boundingRect() const
{
    return QRectF(posx, posy, w, h);
}

void obstaculo_cuadrito::paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget)
{
    painter->setBrush(Qt::transparent);
    painter->drawRect(boundingRect());
}

obstaculo_cuadrito::obstaculo_cuadrito(int posx, int posy, int w, int h)
{
    this->posx=posx;
    this->posy=posy;
    this->w=w;
    this->h=h;

}
