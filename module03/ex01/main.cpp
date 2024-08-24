#include "ScavTrap.hpp"


int main()
{
	ClapTrap *a = new ScavTrap("1");

	a->attack("peak");
	a->beRepaired(1);
	a->takeDamage(12);
	a->attack("pun");
	a->takeDamage(1);
	((ScavTrap *)(a))->guardGate();
	delete a;

	ClapTrap b("wave");
}
