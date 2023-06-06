#include "orbita.h"

orbita::orbita(QObject *parent, int id_, QString name_, QString color_, double x_, double y_, double m_, int r_, double V0x_, double V0y_) : QObject(parent) {
    id = id_;
    name = name_;
    color = color_;
    x = x_;
    y = y_;
    m = m_;
    r = r_;
    V0x = V0x_;
    V0y = V0y_;
    Ax = 0;
    Ay = 0;

    xmin = -6000;
    ymax = 6000;

    scale = 0.05;

    label = new QLabel;
    label->setText(name);

    T = 5;
    //G = 6.67384e-11;
    G = 1;
}
orbita::~orbita() {
    delete label;
}

QRectF orbita::boundingRect() const {
        return QRectF(-1*scale*r, -1*scale*r, 2*scale*r, 2*scale*r);
}
void orbita::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    if(color == "Yellow")
        painter->setBrush(Qt::yellow);
    else if(color == "Blue")
        painter->setBrush(Qt::blue);
    else if(color == "Red")
        painter->setBrush(Qt::red);
    else if(color == "Magenta")
        painter->setBrush(Qt::magenta);
    else if(color == "Green")
        painter->setBrush(Qt::green);
    else if(color == "Black")
        painter->setBrush(Qt::black);

    painter->drawEllipse(boundingRect());
}

bool orbita::is_empty() {
    if(r == 0 || m == 0.0)
        return true;
    else
        return false;
}

void orbita::calculate_Ax(QList<orbita *> bods) {
    double aux = 0;
    double dis;

    Ax= 0;

    for(int k = 0; k<bods.size(); k++){

        if(bods.at(k)->getName() != name){ //es diferente


            dis = sqrt(pow((bods.at(k)->getX() - x), 2)+pow((bods.at(k)->getY() - y),2));

            aux += (G*(bods.at(k)->getM()*(bods.at(k)->getX() - x))/(pow(dis, 3)));
        }
    }
    Ax = aux;
}
void orbita::calculate_Ay(QList<orbita *> bods) {
    double aux = 0;
    double dis;

    Ay = 0;

    for(int k = 0; k<bods.size(); k++){

        if(bods.at(k)->getId() != id){  //no es el mismo cuerpo

            dis = sqrt(pow((bods.at(k)->getX() - x), 2)+pow((bods.at(k)->getY() - y),2)); //distancia en y

            aux += (G*(bods.at(k)->getM()*(bods.at(k)->getY() - y)) / (pow(dis, 3))); //aceleración en y
        }
    }
    Ay = aux;
}

void orbita::update(int w, int h){
    V0x = V0x + (Ax*T);
    V0y = V0y + (Ay*T);
    x = x + (V0x*T);
    y = y + (V0y*T);

    setX(new_x(x, w));
    setY(new_y(y, h));
}

double orbita::getX() const{
    return x;
}
double orbita::getY() const{
    return y;
}

int orbita::new_x(float x_, int w) {
    return int(((1-(x_/-6000))*(w))/2);
}
int orbita::new_y(float y_, int h) {
    return int(((1-(y_/8000))*(h))/2);
}

float orbita::getLabelX() const {
    return (x) + 25;
}
float orbita::getLabelY() const {
    return (y - (r *3));
}

double orbita::getM() const{
    return m;
}
int orbita::getR() const {
    return r;
}

QString orbita::getName() const {
    return name;
}
float orbita::getScale() const {
    return scale;
}
int orbita::getId() const{
    return  id;
}
