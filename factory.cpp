#include "factory.h"
#include "composite.h"
#include "cabin.h"
#include "engine.h"
#include "framechassis.h"
#include "tires.h"

Factory::Factory()
{

}

Component *Factory::createTruck(QLabel *labelTires, QLabel *labelFrameChassis, QLabel *labelChassis, QLabel *labelEngine,
                                QLabel *labelChassisWithEngine, QLabel *labelCabin, QLabel *labelTruck,
                                QString pathFilesTires, QString pathFilesFrameChassis, QString pathFilesChassis, QString pathFilesEngine,
                                QString pathFilesChassisWithEngine, QString pathFilesCabin, QString pathFilesTruck,
                                int costTires, int costFrameChassis, int costChassis, int costEngine,
                                int costChassisWithEngine, int costCabin, int costTruck)
{
    Composite* chassis = new Composite(labelChassis, pathFilesChassis, costChassis);
    chassis->addComponent(new FrameChassis(labelFrameChassis, pathFilesFrameChassis, costFrameChassis));
    chassis->addComponent(new Tires(labelTires, pathFilesTires, costTires));

    Composite* chassisWithEngine = new Composite(labelChassisWithEngine, pathFilesChassisWithEngine, costChassisWithEngine);
    chassisWithEngine->addComponent(chassis);
    chassisWithEngine->addComponent(new Engine(labelEngine, pathFilesEngine, costEngine));

    Composite* truck = new Composite(labelTruck, pathFilesTruck, costTruck);
    truck->addComponent(chassisWithEngine);
    truck->addComponent(new Cabin(labelCabin, pathFilesCabin, costCabin));

    return truck;
}
