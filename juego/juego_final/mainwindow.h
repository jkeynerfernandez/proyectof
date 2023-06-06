#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QTimer>
#include <QThread>
#include <QPixmap>
#include <QRandomGenerator>
#include "bala.h"
#include "fragata.h"
#include "orbita.h"
#include <QMediaPlayer>



class NaveEnemigo; //#include "naveEnemigo.h"
#include "nave.h"
#include "obstaculo_cuadrito.h"
#include "mov_parabolico.h"

#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *evento);


    void keyRelease(QKeyEvent *evento);
    void generarNavesEnemigas();
    void CrearBala();



private:



private slots:
   // void on_pushButton_clicked();
    void EvaluarColision();
    void ActualizarPosicion();
    void ActualizarVidas();
    void ActualizarPosicionBala();
    void EliminarBala();
    void ReiniciarPosicionUNSC();
    void ataqueenemigo();

    //___________________________




private:
    int vel;

    bala *nuevabala;


    //NaveEnemigo *enemigo;
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    nave *UNSC;
    fragata *FRAGATA;

    QList<NaveEnemigo*> enemigos;

    QList<NaveEnemigo*> navesEnemigas;// Aquí usas NaveEnemigo, asegúrate de que esté declarado
    QList<bala*> balas;

    QTimer *tiempoparaevaluarcolision;
    QTimer *timer;//para actualizacion
    QTimer *time;//para la bala
    QTimer *disparoenemigo;
    QTimer *tempo;

   // mov_parabolico *bala;
    QVector<QGraphicsItem*> Obstaculos;

   // bool EvaluarColision(QVector<QGraphicsItem*> vec);
    bool EvaluarColisionnaveEnemigo(QVector<QGraphicsItem*> vec);




    //_________________________________________





 //   void generarEnemigos();
};

#endif // MAINWINDOW_H



