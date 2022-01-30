#include<iostream>
#include<conio.h>
#include"army.h"
#include"swordsman.h"
#include"bowman.h"
#include"rider.h"
int main()
{
	army first;
	army second;
	army* tmp = &first;
	while (true) {
		std::cout << "1 - add a swordsman\n"
			<< "2 - add a bowman\n"
			<< "3 - add a rider\n"
			<< "0 - switch army\n"
			<< "tab - clear\n"
			<< "Enter - start battle\n"
			<< "Esc - exit\n\n\n";
		std::cout << "first army:\n" << first.getInfo() << "\n";
		std::cout << "second army:\n" << second.getInfo() << "\n";

		switch (_getch())
		{
		case '1': tmp->add(new swordsman());
			break;
		case '2': tmp->add(new bowman());
			break;
		case '3': tmp->add(new rider());
			break;
		case '0':
			if (tmp == &first) tmp = &second;
			else tmp = &first;
			break;
		case '\t':
			first.clear();
			second.clear();
			break;
		case 13:
			first.fight(&second);
			system("pause");
			break;
		case 27: return 0;
		}
		system("cls");
	}
}