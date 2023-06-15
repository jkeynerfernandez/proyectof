#ifndef PUERTA_LLAVE_H
#define PUERTA_LLAVE_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>


class Puerta_llave: public QGraphicsItem
{
    int posx;
    int posy;
    int w,h;

public:
    Puerta_llave();
    Puerta_llave(int posx, int posy);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget = nullptr);

};

#endif // PUERTA_LLAVE_H
