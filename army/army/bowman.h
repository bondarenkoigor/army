#pragma once
#include"soldier.h"
#include"bow.h"
class bowman : public soldier
{
public:
	bowman()
	{
		this->health = 100;
		this->isAlive = true;
		this->usedWeapon = new bow();
	}
	virtual std::string getSoldierInfo()
	{
		return "bowman" + std::string("(") + std::to_string(this->health) + std::string("HP)");
	}
};