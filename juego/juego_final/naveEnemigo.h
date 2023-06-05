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
//    int velocidadMinima = 1;
//    int velocidadMaxima = 5;
//    int velocidad = rand() % (velocidadMaxima - velocidadMinima + 1) + velocidadMinima;

//    int posXMinima = 0;
//    int posXMaxima = 800; // Suponiendo que la escena tiene un ancho de 800
//    int posicionInicialX = rand() % (posXMaxima - posXMinima + 1) + posXMinima;
// //   setX(posicionInicialX);


public:

  //  NaveEnemigo();



    explicit NaveEnemigo(QObject *parent = nullptr);


    void run();
    void move();
    void Disparar();
   // void inicializarValores();


private: QList<NaveEnemigo*> enemigos;

signals:
    void destruido();

private slots:
    void manejarDestruccion();

};

#endif // NAVEENEMIGO_H
