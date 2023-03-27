#include "composite.h"


Composite::Composite(QLabel *label, QString pathFile, int cost) : Component(label, pathFile, cost)
{

}

Composite::~Composite()
{
    for (auto i : components)
        delete i;
}

void Composite::draw()
{
    for (auto i : components)
        i->draw();

    Component::_label->setPixmap(Component::_pathFile);
}

int Composite::getCost() const
{
    int sumCost = _cost;

    for (auto i : components)
        sumCost += i->getCost();

    return sumCost;
}

void Composite::addComponent(Component *component)
{
    components.push_back(component);
}
