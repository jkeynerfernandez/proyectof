#ifndef NAVE_H
#define NAVE_H

#include <QObject>
#include <QGraphicsPixmapItem> //permite manejar imagenes
#include <QString>
class nave: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT//
public:
    nave(QString name);
};

#endif // NAVE_H
