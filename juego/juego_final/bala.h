#ifndef BALA_H
#define BALA_H
#include <QTimer>

#include <QObject>

#include <QGraphicsPixmapItem>
class bala : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    double velocidadInicial;
    double aceleracion;
    int posX;
    int posY;



public:
    bala();
    bala(double velocidadInicial, double aceleracion);
    int getPosX() const;
    int getPosY() const;
   // explicit bala(QObject *parent = nullptr);

public slots:
    void mover();
    void setDireccion(int velocidadInicial);

private:
    QPixmap imagenBala;
    QTimer *timer;




};

#endif // BALA_H
