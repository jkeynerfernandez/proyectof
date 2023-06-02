#include "nave.h"

nave::nave(QString name)
{
    setPixmap(QPixmap(name));//name nombre de imagen
}

void nave::posicion()
{
    setPos(x,y);
}

void nave::posicion(int x_1, int y_1)
{
    x = x_1;
    y = y_1;
    setPos(x_1,y_1);

}
