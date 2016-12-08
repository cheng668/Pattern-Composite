#pragma once
#include "Equipment.h"
//��ϻ���
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

