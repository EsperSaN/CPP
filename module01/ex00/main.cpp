/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:13:47 by pruenrua          #+#    #+#             */
/*   Updated: 2024/04/27 20:57:45 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z3 = newZombie("Heep z3");
	Zombie z5("Josh");

	z3->announce();
	randomChump("randomChump");
	randomChump("rnnadfasdf");
	Zombie z4("stack z4");
	delete z3;
}
//std::set_new_handler([]() { std::cout << "new: failed to allocate memory" << std::endl; });
