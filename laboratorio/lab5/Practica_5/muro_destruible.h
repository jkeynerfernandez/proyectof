#ifndef MURO_DESTRUIBLE_H
#define MURO_DESTRUIBLE_H

#include <QGraphicsItem>
#include <QPainter>

class muro_destruible: public QGraphicsItem
{

    int posx;
    int posy;
    int w;
    int h;

public:
    muro_destruible();
    muro_destruible(int posx, int posy, int w, int h);
     ~muro_destruible();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget = nullptr);

    int getPosx() const;
    int getPosy() const;
};

#endif // MURO_DESTRUIBLE_H
