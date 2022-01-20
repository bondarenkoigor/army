#pragma once
class horse
{
private:
	int health;
	bool isAlive;
public:
	horse() : health(250), isAlive(true) {}
	int gethealth()
	{
		return health;
	}
	int takedamage(int damage)
	{
		this->health -= damage;
	}
};