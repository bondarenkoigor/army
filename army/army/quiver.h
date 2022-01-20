#pragma once
#include"arrow.h"
struct Node
{
	arrow* arr;
	Node* next;
	Node* prev;
	Node(arrow* arr, Node* next) : arr(arr), next(next), prev(prev) {}
};

class quiver
{
private:
	Node* arrows;
	void addArrow()
	{
		if (arrows == nullptr)
		{
			this->arrows = new Node(new arrow, nullptr);
			this->arrows->next = nullptr;
			this->arrows->prev = nullptr;
			return;
		}
		Node* iter = this->arrows;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		iter->next = new Node(new arrow, nullptr);
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

	void delete_arrow()
	{
		if (this->arrows == nullptr) return;

		Node* iter = this->arrows;
		while (iter->next != nullptr)  iter = iter->next;
		if (iter == this->arrows) this->arrows = nullptr;
		else iter->prev->next = nullptr;
		delete iter;
	}

	bool isEmpty()
	{
		return (this->arrows = nullptr);
	}
};

