#ifndef OBSTACULO_CUADRITO_H
#define OBSTACULO_CUADRITO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class obstaculo_cuadrito : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:

       int posx;
       int posy;
       int w;
       int h;

public:
    //explicit obstaculo_cudrito(QObject *parent = nullptr);
       obstaculo_cuadrito(int posx, int posy, int w, int h);


       QRectF boundingRect() const;
       void paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget = nullptr);

signals:

};

#endif // OBSTACULO_CUADRITO_H
