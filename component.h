#ifndef COMPONENT_H
#define COMPONENT_H

#include <QLabel>
#include <QPixmap>
#include <QString>

class Component
{
protected:
    QLabel *_label;
    QString _pathFile;
    int _cost;

public:
    Component(QLabel *label, QString pathFile, int cost);
    virtual ~Component();

    virtual void draw() = 0;
    virtual int getCost() const = 0;
};

#endif // COMPONENT_H
