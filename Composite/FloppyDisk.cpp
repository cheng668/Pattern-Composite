#include "FloppyDisk.h"


FloppyDisk::FloppyDisk(const char* name) :Equipment(name)
{
	std::cout << "Construct Equipment!" << std::endl;
}


FloppyDisk::~FloppyDisk()
{
	std::cout << "delete FloppyDisk" << std::endl;
}

CURRENCY FloppyDisk::NetPrice()
{
	return 15;
}