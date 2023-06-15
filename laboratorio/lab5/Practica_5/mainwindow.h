#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <muro.h>
#include <muro_destruible.h>
#include <personaje.h>
#include <bomba.h>
#include <puerta_llave.h>
#include <QList>
#include <QVector>
#include <QTimer>
#include <time.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ActualizarTiempo();
    void Explosion();

private:
    int tiempo;
    int time2;
    Ui::MainWindow *ui;
    personaje *Bomberman;
    bomba *Bomb;
    //personaje *dan;
    Puerta_llave *puerta;
    QGraphicsScene *scene;
    QList<muro*>muros;
    QVector<muro_destruible*>ladrillos;
    QVector<muro_destruible*>vec_aux;
    QTimer *timer;
    void keyPressEvent(QKeyEvent *evento);
    bool EvaluarColision();
};
#endif // MAINWINDOW_H
