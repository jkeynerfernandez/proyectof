#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
//#include <sprite.h>

class gato: public QObject,
        public QGraphicsPixmapItem
     //  public sprite
{
    Q_OBJECT
private:
    int x = 0;
    int y = 0;

public:
    gato(QGraphicsItem *carr=0);
    void posicion();
    void posicion(int x_1, int y_1);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);
};



#endif // PERSONAJE_H
