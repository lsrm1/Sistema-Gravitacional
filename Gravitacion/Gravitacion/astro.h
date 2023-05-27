#ifndef ASTRO_H
#define ASTRO_H

#include <QGraphicsItem>
#include <QPainter>
#include "math.h"

#define E 20
#define ER 15

class astro: public QGraphicsItem
{

public:
    float posx;
    float posy;
    float masa;
    float radio;
    float vx;
    float vy;
    float acx;
    float acy;
    float angulo;
    int color;

public:
    astro(float  x,  float y, float _masa, float _radio, float _vx, float _vy,int _color);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void velocidad();
    void posicion();
};





#endif // ASTRO_H
