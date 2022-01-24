#include"iostream"
#include"army.h"
#include"swordsman.h"
#include"bowman.h"
#include"rider.h"
int main()
{
	army first;
	first.add(new swordsman());
	first.add(new bowman());
	first.add(new rider());
	first.add(new swordsman());
	first.add(new bowman());
	army second;
	second.add(new swordsman());
	second.add(new bowman());
	second.add(new rider());
	second.add(new swordsman());
	second.add(new bowman());

	first.fight(&second);
}