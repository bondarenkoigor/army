#pragma once
#include"soldier.h"
struct soldierNode
{
	soldier* sold;
	soldierNode* next;

	soldierNode(soldier* sold, soldierNode* next) : sold(sold), next(next) {}
	soldierNode(soldierNode* other) : sold(other->sold), next(other->next) {}
};
class army
{
private:
	soldierNode* head;
public:
	army() : head(nullptr) {}
	void add(soldier* newSoldier)
	{
		if (this->head == nullptr)
		{
			this->head = new soldierNode(newSoldier, nullptr);
			return;
		}
		soldierNode* iter = this->head;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		iter->next = new soldierNode(newSoldier, nullptr);
	}
	soldierNode* remove()
	{
		soldierNode* forReturn = new soldierNode(this->head);
		soldierNode* forDelete = this->head;
		this->head = this->head->next;
		delete forDelete;
		return forReturn;
	}
	std::string getInfo()
	{
		std::string info = "";
		soldierNode* iter = this->head;
		while (iter!=nullptr)
		{
			info += iter->sold->getSoldierInfo() + "\n";
			iter = iter->next;
		}
		return info;
	}

	void fight(army* otherArmy)
	{
		while (true)
		{
			//attacker's turn
			this->head->sold->attack(otherArmy->head->sold);
			std::cout << "ATTACKER " << this->head->sold->getSoldierInfo() << " hits " << otherArmy->head->sold->getSoldierInfo() << "\n";
			if (otherArmy->head->sold->getIsAlive() == false) otherArmy->remove();
			if (otherArmy->head == nullptr)
			{
				std::cout << "attacker won\n";
				return;
			}
			//defender's turn
			otherArmy->head->sold->attack(this->head->sold);
			std::cout << "DEFENDER " << otherArmy->head->sold->getSoldierInfo() << " hits " << this->head->sold->getSoldierInfo() << "\n";
			if (this->head->sold->getIsAlive() == false) this->remove();
			if (this->head == nullptr)
			{
				std::cout << "defender won\n";
				return;
			}
		}
	}
};