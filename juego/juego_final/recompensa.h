#ifndef RECOMPENSA_H
#define RECOMPENSA_H

#include <QObject>
#include <nave.h>

class recompensa: public nave
{

    Q_OBJECT
public:
    explicit recompensa(QObject *parent = nullptr);


signals:

};

#endif // RECOMPENSA_H
