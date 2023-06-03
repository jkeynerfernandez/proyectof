#ifndef MOV_PARABOLICO_H
#define MOV_PARABOLICO_H
#define GRAV -100
#define tiempo 0.1

#include <math.h>
#include <QGraphicsItem>
#include <QPainter>

class mov_parabolico: public QGraphicsItem
{
    int posx;
    int posy;
    double velx;
    double vely;
    double vel;
    double ang;
    double r=15;

public:
    mov_parabolico();
    mov_parabolico(double x, double y , double v,double a);
    QRectF boundingRect() const;

    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    void CalcularPosicion();
    void CalcularVelocidad();
    void ActualizarVelocidad();
    int getPosx() const;
    void setPosx(double newPosx);
    int getPosy() const;
    void setPosy(double newPosy);
    double getVelx() const;
    void setVelx(double newVelx);
    double getVely() const;
    void setVely(double newVely);
    double getAng() const;
    void setAng(double newAng);
};

#endif // MOV_PARABOLICO_H
