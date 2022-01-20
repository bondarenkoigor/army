#pragma once
#include "weapon.h"
class arrow : public weapon
{
public:
	arrow()
	{
		this->damage = 35;
		this->durability = 100;
	}
};

