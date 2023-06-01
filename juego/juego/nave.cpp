#include "nave.h"
#include<QTimer>

int nave::getDireccion() const
{
    return direccion;
}

void nave::setDireccion(int newDireccion)
{
    direccion = newDireccion;
}


int nave::getSpeed() const
{
    return speed;
}

void nave::setSpeed(int newSpeed)
{
    speed = newSpeed;
}

int nave::getVidas() const
{
    return vidas;
}

void nave::setVidas(int newVidas)
{
    vidas = newVidas;
}




QRectF nave::boundingRect() const
{

    return QRectF(-ancho/2-2,-alto/2-2,ancho,alto);

}

//void nave::paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget)
//{

//    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,direccion,ancho,alto);


//}

void nave::Actualizacion()
{

    filas = 0;
    columnas +=35;
      if(columnas >=140)
      {
          columnas =0;
      }
      this->update(-ancho/2,-alto/2,ancho,alto);

}

int nave::getX() const
{
    return x;
}

void nave::setX(int value)
{
    x = value;
}

int nave::getY() const
{
    return y;
}

void nave::setY(int value)
{
    y = value;
}

void nave::posicion()
{
    setPos(x,y);
}

void nave::posicion(int x_1, int y_1)
{
    x = x_1;
    y = y_1;
    setPos(x_1,y_1);
}




void nave::MoveUp()
{
    y -= speed;
    setPos(x, y);

}

void nave::MoveDown()
{
    y += speed;
    setPos(x, y);

}

void nave::MoveRight()
{
    x += speed;
    setPos(x, y);

}

void nave::MoveLeft()
{
    x -= speed;
    setPos(x, y);

}
