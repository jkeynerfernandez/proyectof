#ifndef SOLDADO_H
#define SOLDADO_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class soldado: public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x = 0;
    int y = 0;

public:
    soldado(QGraphicsItem *carr=0);
    void posicion();
    void posicion(int x_1, int y_1);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);
};

#endif // SOLDADO_H
