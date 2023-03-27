#ifndef CABIN_H
#define CABIN_H

#include "component.h"

class Cabin : public Component
{
public:
    Cabin(QLabel *label, QString pathFile, int cost);

    void draw() override;
    int getCost() const override;
};

#endif // CABIN_H
