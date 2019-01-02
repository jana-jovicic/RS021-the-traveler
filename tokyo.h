#ifndef TOKYO_H
#define TOKYO_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include "city.h"
#include "evil.h"

class Tokyo : public City {
public:
    Tokyo()
        :City("Tokyo", 250, 250)
    {}

private:
   // Evil * evil;
    void buildCity();
    //bool finished;
};

#endif // TOKYO_H