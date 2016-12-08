#pragma once
#include "CompositeEquipment.h"
//计算机底盘，组合类
class Chassis : public CompositeEquipment
{
public:
	Chassis(const char*);
	virtual ~Chassis();
};

