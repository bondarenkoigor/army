#pragma once
#include "weapon.h"
class spear : public weapon
{
public:
	spear()
	{
		this->damage = 45;
		this->durability = 100;
	}
};