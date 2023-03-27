#include "engine.h"


Engine::Engine(QLabel *label, QString pathFile, int cost) : Component(label, pathFile, cost)
{

}

void Engine::draw()
{
    Component::_label->setPixmap(Component::_pathFile);
}

int Engine::getCost() const
{
    return Component::_cost;
}
