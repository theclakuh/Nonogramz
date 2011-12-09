#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <QPainter>

class Drawable
{
public:
    Drawable();
    virtual void paint(QPainter *painter)=0;
};

#endif // DRAWABLE_H
