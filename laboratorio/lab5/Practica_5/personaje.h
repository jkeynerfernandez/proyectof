#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class personaje : public QObject,
        public QGraphicsItem
{
    int posx;
    int posy;
    int velocidad;
    int direccion=0;

    Q_OBJECT
public:

    explicit personaje(QObject *parent = nullptr); //constructor

    QTimer *timer;
    QPixmap *pixmap;

    float filas,columnas;

    float ancho;
    float alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


    int getDireccion() const;
    void setDireccion(int newDireccion);

    int getPosx() const;
    void setPosx(int newPosx);

    int getPosy() const;
    void setPosy(int newPosy);

    void MoveUp();
    void MoveDown();
    void MoveRight();
    void MoveLeft();
    void ActualizarPos();

signals:

public slots:
    void Actualizacion();

//virtual int handle(struct per_thread_traffic_log * pttl)=0;
//virtual ~QObjectData() = 0;

};

#endif // PERSONAJE_H
