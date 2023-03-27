#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <QVector>
#include "component.h"

class Composite : public Component
{
    QVector<Component*> components;

public:
    Composite(QLabel *label, QString pathFile, int cost);
    ~Composite() override;

    void draw() override;
    int getCost() const override;

    void addComponent(Component *component);
};

#endif // COMPOSITE_H
