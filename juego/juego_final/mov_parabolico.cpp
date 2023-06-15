#include "mov_parabolico.h"

int mov_parabolico::getPosx() const
{
    return posx;
}

void mov_parabolico::setPosx(double newPosx)
{
    posx = newPosx;
}

int mov_parabolico::getPosy() const
{
    return posy;
}

void mov_parabolico::setPosy(double newPosy)
{
    posy = newPosy;
}

double mov_parabolico::getVelx() const
{
    return velx;
}

void mov_parabolico::setVelx(double newVelx)
{
    velx = newVelx;
}

double mov_parabolico::getVely() const
{
    return vely;
}

void mov_parabolico::setVely(double newVely)
{
    vely = newVely;
}

double mov_parabolico::getAng() const
{
    return ang;
}

void mov_parabolico::setAng(double newAng)
{
    ang = newAng;
}

mov_parabolico::mov_parabolico()
{

}

mov_parabolico::mov_parabolico(double x, double y, double v, double a)
{
    this->posx=x;
    this->posy=y;
    this->vel=v;
    this->ang=a;
    setPos(posx, -posy);
}

QRectF mov_parabolico::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void mov_parabolico::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawEllipse(boundingRect());
}

void mov_parabolico::CalcularPosicion()
{
    posx+=velx*tiempo;
    posy+=vely*tiempo+(0.5*GRAV*(tiempo*tiempo));
    setPos(posx, -posy);
}

void mov_parabolico::CalcularVelocidad()
{
    velx=vel*cos(ang);
    vely=vel*sin(ang)+GRAV*tiempo;

}
void mov_parabolico::ActualizarVelocidad()
{
    vel=sqrt(velx*velx+vely*vely);
    ang=atan2(vely,velx);
}
