#pragma once
class weapon
{
protected:
	int damage;
	int durability;
public:
	weapon() : damage(0), durability(100) {}

	virtual int getDurability()
	{
		return durability;
	}

	virtual int getDamage()
	{
		return this->damage;
	}

	virtual void takeDurabilityDamage()
	{
		this->durability -= 10;
	}

	virtual int dealDamage()
	{
		if (this->durability <= 0) return 0;
		takeDurabilityDamage();
		return this->damage;
	}
};

