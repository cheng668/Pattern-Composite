#pragma once
#include "Equipment.h"
//������������Ҷ��
class FloppyDisk : public Equipment
{
public:
	FloppyDisk(const char*);
	virtual ~FloppyDisk();

	virtual CURRENCY NetPrice();
};

