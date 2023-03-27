#include "tires.h"


Tires::Tires(QLabel *label, QString pathFile, int cost) : Component(label, pathFile, cost)
{

}

void Tires::draw()
{
    Component::_label->setPixmap(Component::_pathFile);
}

int Tires::getCost() const
{
    return Component::_cost;
}
