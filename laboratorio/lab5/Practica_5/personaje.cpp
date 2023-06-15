#include "personaje.h"

int personaje::getDireccion() const
{
    return direccion;
}

void personaje::setDireccion(int newDireccion)
{
    direccion = newDireccion;
}

int personaje::getPosx() const
{
    return posx;
}

void personaje::setPosx(int newPosx)
{
    posx = newPosx;
}

int personaje::getPosy() const
{
    return posy;
}

void personaje::setPosy(int newPosy)
{
    posy = newPosy;
}

personaje::personaje(QObject *parent)
    : QObject{parent}
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;
    velocidad = 5;
    pixmap = new QPixmap(":/new/Images/Images/Bomberman.png");

    //dimensiones de cada una de las imagenes
    ancho = 30;
    alto  = 30;

    timer->start(200);// modifica la velocidad en que itera entre las imagenes

    connect(timer,&QTimer::timeout,this,&personaje::Actualizacion);


}

void personaje::Actualizacion()
{
    columnas +=30;
    if(columnas >=120)
    {
        columnas =0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);

}
QRectF personaje::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void personaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,direccion,ancho,alto);
}

void personaje::MoveUp()
{
    posy-=velocidad;
    setPos(posx, posy);
}

void personaje::MoveDown()
{
    posy+=velocidad;
    setPos(posx, posy);
}

void personaje::MoveRight()
{
    posx+=velocidad;
    setPos(posx, posy);
}

void personaje::MoveLeft()
{
    posx-=velocidad;
    setPos(posx, posy);
}

void personaje::ActualizarPos()
{
  setPosx(posx);
  setPosy(posy);
}
