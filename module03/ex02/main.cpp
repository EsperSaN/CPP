#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap *a = new FragTrap("FT");

	a->attack("target");
	a->takeDamage(10);
	a->beRepaired(10);
	((FragTrap*)(a))->highFivesGuys();
	
	delete a;

}
