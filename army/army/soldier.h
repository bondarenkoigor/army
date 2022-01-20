#pragma once
#include"weapon.h"
class soldier
{
protected:
	int health;
	bool isAlive;
	weapon usedWeapon;
public:
	soldier() : health(100), isAlive(true) {}
	int gethealth()
	{
		return health;
	}
	void takedamage(int damage)
	{
		this->health -= damage;
	}
	void attack(soldier* otherSoldier)
	{
		otherSoldier->takedamage(this->usedWeapon.dealDamage());
	}
};