#pragma once
#include"weapon.h"
#include <string>
class soldier
{
protected:
	int health;
	bool isAlive;
	weapon* usedWeapon;
public:
	soldier() : health(100), isAlive(true) {}
	int getHealth()
	{
		return health;
	}
	bool getIsAlive()
	{
		return isAlive;
	}
	virtual void takeDamage(int damage)
	{
		this->health -= damage;
		if (this->health <= 0) this->isAlive = false;
	}
	virtual void attack(soldier* otherSoldier)
	{
		otherSoldier->takeDamage(this->usedWeapon->dealDamage());
	}
	virtual std::string getSoldierInfo()
	{
		return "soldier" + std::string("(") + std::to_string(this->health) + std::string("HP)");
	}
};