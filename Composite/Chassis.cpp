#include "Chassis.h"


Chassis::Chassis(const char* name) :CompositeEquipment(name)
{
	std::cout << "Constract Chassis!" << std::endl;

}


Chassis::~Chassis()
{
	std::cout << "delete Chassis!" << std::endl;

}
