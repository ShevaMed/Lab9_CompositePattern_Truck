#include "cabin.h"


Cabin::Cabin(QLabel *label, QString pathFile, int cost) : Component(label, pathFile, cost)
{

}

void Cabin::draw()
{
    Component::_label->setPixmap(Component::_pathFile);
}

int Cabin::getCost() const
{
    return Component::_cost;
}
