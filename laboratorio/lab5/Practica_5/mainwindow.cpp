#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <time.h>
#include <QDebug>
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    tiempo = 0;
    time2 = 0;
    ui->setupUi(this);
    scene = new QGraphicsScene();
    timer = new QTimer();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,750,500);
    Bomberman = new personaje();
    scene->addItem(Bomberman);
    Bomberman->setPosx(60);
    Bomberman->setPosy(60);

    //CREAR MURO:
    for(int i=0; i<=720; i+=40)
    {
    muros.push_back(new muro(i,0,40,40));
    scene->addItem(muros.back());}

    for(int i=40; i<=500; i+=40)
    {
    muros.push_back(new muro(0,i,40,40));
    scene->addItem(muros.back());}

    for(int i=40; i<=720; i+=40)
    {
    muros.push_back(new muro(i,480,40,40));
    scene->addItem(muros.back());}

    for(int i=40; i<=480; i+=40)
    {
    muros.push_back(new muro(720,i,40,40));
    scene->addItem(muros.back());}

    //CREAR MUROS DE ESCENARIO
    int y=0;
    while(y<=500){
    y+=80;
    for(int x=80; x<=720; x+=80)
    {
    muros.push_back(new muro(x,y,40,40));
    scene->addItem(muros.back());}}

    //Crear los ladrillos aleatorios
    y=0;
    while(y<=400){
    y+=40;
    for(int x=40; x<=690; x+=40)
    {
        if((x%80==0 && y%80==0) || (x==40 && y==40) /*|| (x==40 && y==80) ||(x==80 && y==40)*/){
            x+=40;
            ladrillos.push_back(new muro_destruible(x,y,40,40));
            //scene->addItem(ladrillos.back());
        }else{
    ladrillos.push_back(new muro_destruible(x,y,40,40));
    //scene->addItem(ladrillos.back());
     }}}

    srand(time(NULL));
    int pos;
    for(int i=0;i<100;i++){
    pos = rand() % ladrillos.size();
    vec_aux.push_back(ladrillos.at(pos));}

    //qDebug()<<vec_aux.size();

     for(int i=0;i<100;i++){
      scene->addItem(vec_aux.at(i));
}
     int posicion;
     posicion = rand() % vec_aux.size();
     puerta = new Puerta_llave(vec_aux.at(posicion)->getPosx()+2, vec_aux.at(posicion)->getPosy()+2);
     scene->addItem(puerta);

    connect(timer, SIGNAL(timeout()), this, SLOT(ActualizarTiempo()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::ActualizarTiempo()
{
    tiempo++;
    ui->lcdNumber->display(tiempo);
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{

    if(evento->key()==Qt::Key_W)
    {
        if(!EvaluarColision()){
            Bomberman->MoveUp();
            Bomberman->setDireccion(0);}
        else{
        Bomberman->MoveDown();
        Bomberman->setDireccion(60);}}

    else if(evento->key()==Qt::Key_S)
    {
        if(!EvaluarColision()){
            Bomberman->MoveDown();
            Bomberman->setDireccion(60);}
        else{
        Bomberman->MoveUp();
        Bomberman->setDireccion(0);}}

    else if(evento->key()==Qt::Key_D)
    {
        if(!EvaluarColision()){
            Bomberman->MoveRight();
            Bomberman->setDireccion(30);}
        else{
        Bomberman->MoveLeft();
        Bomberman->setDireccion(90);}}

    else if(evento->key()==Qt::Key_A)
    {
        if(!EvaluarColision()){
            Bomberman->MoveLeft();
            Bomberman->setDireccion(90);
        }
        else{
        Bomberman->MoveRight();
        Bomberman->setDireccion(30);}}

    if(evento->key()==Qt::Key_Space){
        Bomberman->ActualizarPos();
        int x=0,y=0;
        x = Bomberman->getPosx();
        y = Bomberman->getPosy();
        if(Bomb->ValidarLugar(x,y))
        Bomb = new bomba(x/2,y/2-7);
        scene->addItem(Bomb);
        connect(timer, SIGNAL(timeout()), this, SLOT(Explosion()));

    }
}

    void MainWindow::Explosion()
    {
        //time2=0;
        time2++;
        if(time2==1)
        scene->removeItem(Bomb);
       // scene->removeItem(vec_aux.at(i));
        //timer->stop();
    }


bool MainWindow::EvaluarColision()
{
QList<muro*>::Iterator it;
for(it=muros.begin(); it!=muros.end(); it++)
{
    if((*it)->collidesWithItem(Bomberman))
        return true;
}
return false;
//ladrillos
QVector<muro_destruible*>::Iterator i;
for(i=vec_aux.begin(); i!=vec_aux.end(); i++)
{
    if((*i)->collidesWithItem(Bomberman))
        return true;
}
return false;
}

