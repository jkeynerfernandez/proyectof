#ifndef NAVE_H
#define NAVE_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <personaje.h>

class nave : public QObject, public QGraphicsItem
{
    Q_OBJECT

private:
    int x=0;
    int y=0 ;
    int direccion=0;
    int speed=6;
    int vidas=3;

public:


   // sprite (QGraphicsItem *carr=0);
    explicit nave(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *pixmap;

    float filas, columnas;
    float ancho, alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget = nullptr);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    void posicion();
    void posicion(int x_1, int y_1);

    int getDireccion() const;
    void setDireccion(int newDireccion);



    int getSpeed() const;
    void setSpeed(int newSpeed);


    void MoveUp();
    void MoveDown();
    void MoveRight();
    void MoveLeft();



    int getVidas() const;
    void setVidas(int newVidas);

signals:

     public slots:
           void Actualizacion();


};

#endif // NAVE_H
