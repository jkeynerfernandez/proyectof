#ifndef NAVEENEMIGO_H
#define NAVEENEMIGO_H

#include <QObject>
#include <QThread>
#include <nave.h>
#include "mainwindow.h"

class NaveEnemigo : public nave
{
    Q_OBJECT
public:

  //  NaveEnemigo();


    explicit NaveEnemigo(QObject *parent = nullptr);


    void run();


private: QList<NaveEnemigo*> enemigos;

signals:
    void destruido();

private slots:
    void manejarDestruccion();

};

#endif // NAVEENEMIGO_H
