#ifndef BALA_H
#define BALA_H
#include <QTimer>

#include <QObject>

#include <QGraphicsPixmapItem>
class bala : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    double velocidadInicial;  // Velocidad inicial de la bala
    double aceleracion;  // Aceleración de la bala



public:
    bala();
    bala(double velocidadInicial, double aceleracion);
   // explicit bala(QObject *parent = nullptr);

public slots:
    void mover();

private:
    QPixmap imagenBala;
    QTimer *timer;




};

#endif // BALA_H
