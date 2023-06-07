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



public:





    explicit NaveEnemigo(QObject *parent = nullptr);


    void run();
    void move();
    void Disparar();



private: QList<NaveEnemigo*> enemigos;
    fragata* fragataPtr;

signals:
    void destruido();

private slots:
    void manejarDestruccion();

};

#endif // NAVEENEMIGO_H
