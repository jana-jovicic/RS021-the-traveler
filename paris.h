#ifndef PARIS_H
#define PARIS_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
//#include <QPainter>
#include "city.h"

class Paris : public City {
public:
    Paris()
        :City("Paris", 750, 250)
    {}


private:

    void buildCity();
    void makeStreet(QString imgPath, int xScale, int yScale, int xPos, int yPos);

};

#endif // PARIS_H
