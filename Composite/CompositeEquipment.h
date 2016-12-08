#pragma once
#include "Equipment.h"
//组合基类
class CompositeEquipment : public Equipment
{
public:
	virtual ~CompositeEquipment();

	virtual CURRENCY NetPrice();
	virtual void Add(Equipment*);
	virtual void Remove(Equipment*);
	//virtual ListIterator CreateIterator();
protected:
	CompositeEquipment(const char*);
private:
	std::list<Equipment*> _equipment;
};

