#include "framechassis.h"


FrameChassis::FrameChassis(QLabel *label, QString pathFile, int cost) : Component(label, pathFile, cost)
{

}

void FrameChassis::draw()
{
    Component::_label->setPixmap(Component::_pathFile);
}

int FrameChassis::getCost() const
{
    return Component::_cost;
}
