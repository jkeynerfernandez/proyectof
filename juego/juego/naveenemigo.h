#ifndef NAVEENEMIGO_H
#define NAVEENEMIGO_H

#include <QObject>
#include "nave.h"

class naveenemigo : public nave
{
    Q_OBJECT
public:
  //  naveenemigo(QString name);
    explicit naveenemigo(QObject *parent = nullptr);

signals:

};

#endif // NAVEENEMIGO_H
