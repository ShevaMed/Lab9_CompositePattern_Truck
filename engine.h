#ifndef ENGINE_H
#define ENGINE_H

#include "component.h"

class Engine : public Component
{
public:
    Engine(QLabel *label, QString pathFile, int cost);

    void draw() override;
    int getCost() const override;
};

#endif // ENGINE_H
