#ifndef ASTRO_H
#define ASTRO_H

#include <QGraphicsItem>
#include <QPainter>
#include "math.h"

#define E 25
#define ER 10
#define GR 1
#define TI 1

class astro: public QGraphicsItem
{

public:
    float posx;
    float  posy;
    float  masa;
    float  radio;
    float  vx;
    float  vy;
    float  acx;
    float  acy;
    float  angulo;
    int color;

public:
    astro(float   x,  float  y, float  _masa, float  _radio, float  _vx, float  _vy,int _color);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void velocidad();
    void posicion();
    void aceleracion(float  astro2, float  px2, float py2);
};

#endif // ASTRO_H
