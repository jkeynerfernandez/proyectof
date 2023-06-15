#include "bomba.h"
#include <QGraphicsScene>

int bomba::getPosx() const
{
    return posx;
}

int bomba::getPosy() const
{
    return posy;
}

bomba::bomba()
{

}

bomba::bomba(int posx, int posy)
{
    this->posx=posx;
    this->posy=posy;
    w = 30;
    h = 33;
    TAntesDeExplotar = 0;

    setPos(posx, posy);

    timer = new QTimer();
    timer->start(100);

    //connect(time,&QTimer::timeout,this,&bomba::Explosion);
}

bomba::~bomba()
{
 scene()->removeItem(this);

}

QRectF bomba::boundingRect() const
{
   return QRectF(posx, posy, w, h);
}

void bomba::paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget)
{
    QPixmap pxmap(":/new/Images/Images/Bomba.png");

    painter->drawPixmap(boundingRect(),pxmap, pxmap.rect());
}

void bomba::Explosion()
{
    //delete this;
}

bool bomba::ValidarLugar(int xjugador, int yjugador)
{
    if(xjugador%80!=0 && yjugador%80!=0 ){
        return true;
    }else{
        return false;
    }
}
