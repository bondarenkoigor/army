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
			info += iter->sold->getSoldierName() + "\n";
			iter = iter->next;
		}
		return info;
	}
};