#pragma once
#include "Chassis.h"
#include "FloppyDisk.h"
#include "iostream"
int main()
{
	Chassis* cabinet = new Chassis("PC Chassis");
	FloppyDisk* flg1 = new FloppyDisk("FloppyDisk1");
	FloppyDisk* flg2 = new FloppyDisk("FloppyDisk2");

	cabinet->Add(flg1);
	cabinet->Add(flg2);
	std::cout << cabinet->NetPrice() <<std::endl;
	std::cout << cabinet->Name() << std::endl;
	std::cout << flg1->Name() << std::endl;
	std::cout << flg2->Name() << std::endl;
	delete flg1;
	delete flg2;
	delete cabinet;
	system("pause");
	_CrtDumpMemoryLeaks();
	return 0;
}

/*
output:
	Equ construct!
	Comp construct!
	Constract Chassis!
	Equ construct!
	Construct Equipment!
	Equ construct!
	Construct Equipment!
	30
	PC Chassis
	FloppyDisk1
	FloppyDisk2
	delete FloppyDisk
	delete Equipment!
	delete FloppyDisk
	delete Equipment!
	delete Chassis!
	delete comp!
	delete Equipment!
*/