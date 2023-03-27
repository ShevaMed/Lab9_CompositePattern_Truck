#ifndef TIRES_H
#define TIRES_H

#include "component.h"

class Tires : public Component
{
public:
    Tires(QLabel *label, QString pathFile, int cost);

    void draw() override;
    int getCost() const override;
};

#endif // TIRES_H
