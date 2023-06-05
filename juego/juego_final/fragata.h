#ifndef FRAGATA_H
#define FRAGATA_H



#include <QGraphicsPixmapItem>


class fragata: public QGraphicsPixmapItem
{
private:
    int x=0;
    int y=0 ;


    int vidas=100;

public:
     fragata(QGraphicsItem* parent =nullptr);

     int getX() const;
     void setX(int value);

     int getY() const;
     void setY(int value);

     void posicion();
     void posicion(int x_1, int y_1);

     int getDireccion() const;
     void setDireccion(int newDireccion);

     int getVidas() const;
     void setVidas(int newVidas);

private:
    QPixmap pixmap;

signals:

};

#endif // FRAGATA_H
