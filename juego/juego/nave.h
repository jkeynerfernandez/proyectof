#ifndef NAVE_H
#define NAVE_H

#include <QObject>
#include <QGraphicsPixmapItem> //permite manejar imagenes
#include <QString>
class nave: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT//

private:
    int x=0;
    int y=0 ;
    int direccion=0;
    int speed=6;
    int vidas=7;

public:


    nave(QString name);
    void posicion();
    void posicion(int x_1, int y_1);
};

#endif // NAVE_H
