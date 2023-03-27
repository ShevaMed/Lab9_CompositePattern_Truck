#ifndef FRAMECHASSIS_H
#define FRAMECHASSIS_H

#include "component.h"

class FrameChassis : public Component
{
public:
    FrameChassis(QLabel *label, QString pathFile, int cost);

    void draw() override;
    int getCost() const override;
};

#endif // FRAMECHASSIS_H
