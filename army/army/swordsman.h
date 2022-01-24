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
	virtual std::string getSoldierInfo()
	{
		return "swordsman" + std::string("(") + std::to_string(this->health) + std::string("HP)");;
	}
};