#pragma once
#include"soldier.h"
#include"sword.h"
class swordsman : public soldier
{
public:
	swordsman()
	{
		this->health = 150;
		this->isAlive = true;
		this->usedWeapon = new sword();
	}
	virtual std::string getSoldierName()
	{
		return "swordsman";
	}
};