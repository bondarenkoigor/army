#pragma once
#include"quiver.h"
class bow : weapon
{
private:
	quiver* quiv;
public:
	bow(quiver* quiv)
	{
		this->quiv = quiv;
		this->damage = 5;
	}

	int getdamage()
	{
		return this->damage + (*quiv).getArrowDamage();
	}

	int dealDamage()
	{
		if(this->durability<=0 || quiv->)
	}
};