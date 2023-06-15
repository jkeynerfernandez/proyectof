#ifndef BOMBA_H
#define BOMBA_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <QObject>

class bomba: public QGraphicsItem, public QObject
{
    int posx;
    int posy;
    int w;
    int h;
    int indicex;
    int TAntesDeExplotar;

public:

    QTimer *timer;
    bomba();
    bomba(int posx, int posy);
     ~bomba();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *opcion, QWidget *Widget = nullptr);

    void Explosion();
    bool ValidarLugar(int xjugador, int yjugador);
    int getPosx() const;
    int getPosy() const;
};

#endif // BOMBA_H
