#pragma once
#include"arrow.h"
struct arrowNode
{
	arrow* arr;
	arrowNode* next;
	arrowNode* prev;
	arrowNode(arrow* arr, arrowNode* next) : arr(arr), next(next), prev(prev) {}
};

class quiver
{
private:
	arrowNode* arrows;
	void addArrow()
	{
		if (arrows == nullptr)
		{
			this->arrows = new arrowNode(new arrow, nullptr);
			this->arrows->next = nullptr;
			this->arrows->prev = nullptr;
			return;
		}
		arrowNode* iter = this->arrows;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		iter->next = new arrowNode(new arrow, nullptr);
		iter->next->next = nullptr;
		iter->next->prev = iter;
	}
public:
	quiver()
	{
		arrows = nullptr;
		for (int i = 0; i < 25; i++)
		{
			addArrow();
		}
	}

	int getArrowDamage()
	{
		return arrows->arr->getDamage();
	}

	void deleteArrow()
	{
		if (this->arrows == nullptr) return;

		arrowNode* iter = this->arrows;
		while (iter->next != nullptr)  iter = iter->next;
		if (iter == this->arrows) this->arrows = nullptr;
		else iter->prev->next = nullptr;
		delete iter;
	}

	bool isEmpty()
	{
		return (this->arrows == nullptr);
	}
};

