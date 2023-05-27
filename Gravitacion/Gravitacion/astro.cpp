#include "astro.h"

astro::astro(float x, float y, float _masa, float _radio, float _vx, float _vy,int _color)
{
    posx = x;
    posy = y;
    masa = _masa;
    radio = _radio;
    vx = _vx;
    vy = _vy;
    acx = 0;
    acy = 0;
    angulo = 0;
    color = _color;
    setPos((posx/E), (-posy/E));
}

QRectF astro::boundingRect() const
{
    return QRect(-radio/ER, -radio/ER, (radio/ER)*2, (radio/ER)*2);
}

void astro::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    option = nullptr;
    widget = nullptr;

    if (color == 1) {painter->setBrush(Qt::blue);painter->setPen(Qt::blue);}
    if (color == 2) {painter->setBrush(Qt::red);painter->setPen(Qt::red);}
    if (color == 3) {painter->setBrush(Qt::yellow);painter->setPen(Qt::yellow);}

    painter->drawEllipse(boundingRect());

}

void astro::posicion()
{
    posx = posx + vx + (0.5 * acx );
    posy = posy + vy + (0.5 * acy );

    setPos((posx/E), (-posy/E));
}

void astro::velocidad()
{
    vx = vx + acx;
    vy = vy + acy;
}
