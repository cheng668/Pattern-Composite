#pragma once
#include <iterator>
#include <list>
#include <memory>
#include <iostream>
#define CURRENCY	 int
class Equipment
{
public:
	using ListIterator = std::list<Equipment*>::iterator;
	virtual ~Equipment(){
		std::cout << "delete Equipment!" << std::endl;
	}
	const char* Name() { return _name; }

	virtual CURRENCY NetPrice() = 0;

	virtual void Add(Equipment*){};
	virtual void Remove(Equipment*){};
	//µü´úÆ÷Ä£Ê½£º
	//virtual iterator<Equipment*>* CreateIterator(){};
	virtual ListIterator CreateIterator(){
		ListIterator i;
		return i;
	}
protected:
	Equipment(const char* name) :_name(name){ std::cout << "Equ construct!" << std::endl; }
private:
	const char* _name;
};