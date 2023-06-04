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

private slots:
   // void on_pushButton_clicked();
    void ActualizarPosicion();
    void ActualizarVidas();
    void ActualizarPosicionBala();
    void EliminarBala();
   // void EliminarFantasma();

private:
    int vel;
    bala *nuevabala;
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    nave *UNSC;
    QList<NaveEnemigo*> enemigos;

    QList<NaveEnemigo*> navesEnemigas;// Aquí usas NaveEnemigo, asegúrate de que esté declarado
    QList<bala*> balas;
    QTimer *timer;//para actualizacion
    QTimer *time;//para la bala
    QTimer *tempo;
   // mov_parabolico *bala;
    QVector<QGraphicsItem*> Obstaculos;

    bool EvaluarColision(QVector<QGraphicsItem*> vec);
    bool EvaluarColisionnaveEnemigo(QVector<QGraphicsItem*> vec);
 //   void generarEnemigos();
};

#endif // MAINWINDOW_H



//#ifndef MAINWINDOW_H
//#define MAINWINDOW_H
//#include <QMainWindow>
//#include <QGraphicsScene>
//#include <QGraphicsRectItem>
//#include <QKeyEvent>
//#include <QTimer>
//#include <QThread>
//#include <QPixmap>
//#include <nave.h>
////#include <obstaculo_cuadrito.h>
////#include <mov_parabolico.h>
//#include "naveEnemigo.h"

//#include <Qlist>//contenedor para navenaveEnemigo



//QT_BEGIN_NAMESPACE
//namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

//class MainWindow : public QMainWindow
//{
//    Q_OBJECT

//public:
//    MainWindow(QWidget *parent = nullptr);
//    ~MainWindow();

//    void keyPressEvent(QKeyEvent *evento);
//   // bool eventFilter(QObject * obj, QEvent * event);
//    void keyRelease(QKeyEvent *evento);



//private slots:

//    void on_pushButton_clicked();
//    void ActualizarPosicion();
//    void ActualizarVidas();
//    void EliminarPelota();
//    void EliminarFantasma();


//private:
//    int vel;
//    Ui::MainWindow *ui;
//    QGraphicsScene *scene;
//    nave *UNSC;
//   // naveEnemigo *COVENANT;
//    QList<NaveEnemigo*> enemigos;
//    QTimer *timer;//para movimiento de personaje
//    QTimer *time;
//    QTimer *tempo;

//    mov_parabolico *pelota;
//    QVector<QGraphicsItem*>Obstaculos;

//    bool EvaluarColision(QVector<QGraphicsItem*>vec);
//    bool EvaluarColisionnaveEnemigo(QVector<QGraphicsItem*>vec);
//    void generarEnemigos();


//};
//#endif // MAINWINDOW_H
