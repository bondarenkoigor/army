#pragma once
class horse
{
private:
	int health;
	bool isAlive;
public:
	horse() : health(200), isAlive(true) {}
	int getHealth()
	{
		return health;
	}
	void takeDamage(int damage)
	{
		this->health -= damage;
		if (this->health <= 0) this->isAlive = false;
	}
	bool getIsAlive()
	{
		return isAlive;
	}
};