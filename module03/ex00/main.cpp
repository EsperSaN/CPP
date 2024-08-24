#include "ClapTrap.hpp"


int main()
{
	ClapTrap *aa = new ClapTrap("wave");

	aa->attack("peak");
	aa->takeDamage(5);
	aa->beRepaired(1);
	aa->takeDamage(1);
	aa->beRepaired(15);
	aa->attack("Earth");
	aa->attack("it support");
	aa->attack("VLAD");
	aa->attack("JCA");
	aa->beRepaired(1);
	aa->beRepaired(1);
	aa->beRepaired(1);
	aa->beRepaired(1);
	aa->attack("peak");
	delete aa;
}
