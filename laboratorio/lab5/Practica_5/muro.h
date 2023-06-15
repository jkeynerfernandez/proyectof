#ifndef MURO_H
#define MURO_H

#include <QGraphicsItem>
#include <QPainter>


class muro: public QGraphicsItem

{
    int posx;
    int posy;
    int w;
    int h;



public:
    muro();
    muro(int posx, int posy, int w, int h);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget = nullptr);

};

#endif // MURO_H
