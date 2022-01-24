#pragma once
#include"soldier.h"
#include"spear.h"
#include"horse.h"
class rider : public soldier
{
protected:
	horse* usedHorse;
public:
	rider()
	{
		this->health = 150;
		this->isAlive = true;
		this->usedWeapon = new spear();
		this->usedHorse = new horse();
	}
	void takeDamage(int damage)
	{
		if (this->usedHorse->getIsAlive())
		{
			this->usedHorse->takeDamage(damage);
			return;
		}
		soldier::takeDamage(damage);
	}
	int getHorseHealth()
	{
		return this->usedHorse->getHealth();
	}
	virtual std::string getSoldierName()
	{
		return "rider";
	}
};