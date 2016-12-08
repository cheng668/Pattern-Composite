#include "CompositeEquipment.h"

CompositeEquipment::CompositeEquipment(const char* name) :Equipment(name)
{
	std::cout << "Comp construct!" << std::endl;
}


CompositeEquipment::~CompositeEquipment()
{
	std::cout << "delete comp!" << std::endl;
}

CURRENCY CompositeEquipment::NetPrice(){
	ListIterator i = CreateIterator();
	CURRENCY total = 0;
	for (i = _equipment.begin(); i != _equipment.end(); i++)
		total += (*i)->NetPrice();
	return total;
}

void CompositeEquipment::Add(Equipment* equ)
{
	_equipment.push_back(equ);
}

void CompositeEquipment::Remove(Equipment* equ)
{
	_equipment.remove(equ);
}

//ListIterator CompositeEquipment::CreateIterator()
//{
//	ListIterator i;
//	return i;
//}