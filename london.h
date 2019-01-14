#ifndef LONDON_H
#define LONDON_H

#include "city.h"
#include "tee.h"
#include <QList>

class London : public City
{
public:
    London();

    void buildSpecial(QJsonObject &json);
    void removeSushi(QGraphicsItem *item);

private:
    QList <Tee *> _listOfTees;
};

#endif // LONDON_H
