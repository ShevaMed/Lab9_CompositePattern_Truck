#ifndef FACTORY_H
#define FACTORY_H

#include "component.h"

class Factory
{
    Factory();

public:
    static Component* createTruck(QLabel *labelTires, QLabel *labelFrameChassis, QLabel *labelChassis, QLabel *labelEngine,
                                  QLabel *labelChassisWithEngine, QLabel *labelCabin, QLabel *labelTruck,
                                  QString pathFilesTires, QString pathFilesFrameChassis, QString pathFilesChassis, QString pathFilesEngine,
                                  QString pathFilesChassisWithEngine, QString pathFilesCabin, QString pathFilesTruck,
                                  int costTires, int costFrameChassis, int costChassis, int costEngine,
                                  int costChassisWithEngine, int costCabin, int costTruck);
};

#endif // FACTORY_H
