#include "muro.h"

muro::muro()
{

}

muro::muro(int posx, int posy, int w, int h)
{
    this->posx=posx;
    this->posy=posy;
    this->w=w;
    this->h=h;
}

QRectF muro::boundingRect() const
{
    return QRectF(posx, posy, w, h);
}

void muro::paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget)
{
   // if(posx%80==0 && posy%80==0 && (posx==0 || posy==0)){
    //painter->setBrush(Qt::gray);
    //painter->drawRect(boundingRect());
    /*else{}*/
        QPixmap pxmap(":/new/Images/Images/muro.png");

        painter->drawPixmap(boundingRect(),pxmap, pxmap.rect());


}
