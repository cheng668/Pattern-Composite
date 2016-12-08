#pragma once
#include "Equipment.h"
//´ÅÅÌÇý¶¯Æ÷£¬Ò¶×Ó
class FloppyDisk : public Equipment
{
public:
	FloppyDisk(const char*);
	virtual ~FloppyDisk();

	virtual CURRENCY NetPrice();
};

