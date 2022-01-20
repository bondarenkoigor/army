#pragma once
#include "weapon.h"
class sword : public weapon
{
public:
	sword()
	{
		this->damage = 30;
		this->durability = 100;
	}
};

