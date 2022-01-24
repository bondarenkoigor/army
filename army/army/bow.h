#pragma once
#include"quiver.h"
class bow : public weapon
{
protected:
	quiver* quiv;
public:
	bow()
	{
		this->quiv = new quiver();
		this->damage = 5;
	}

	int getDamage()
	{
		return this->damage + (*quiv).getArrowDamage();
	}

	int dealDamage()
	{
		if (this->durability <= 0 || quiv->isEmpty() == false) return 0;
		takeDurabilityDamage();
		return this->getDamage();
	}
};