/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:13:47 by pruenrua          #+#    #+#             */
/*   Updated: 2024/04/19 11:59:17 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define AR_SIZE 3

int main()
{
	Zombie z0;
	Zombie z1("");
	Zombie *zptr;
	zptr = zombieHorde(AR_SIZE, "WAVE");
	for (int i = 0; i < 2; i++)
	{
		std::cout << i << " index : " << std::flush;
		zptr[i].announce();
	}
	delete[] zptr;
}
//https://en.cppreference.com/w/cpp/memory/new/operator_delete
//Called by delete[]-expressions to deallocate storage previously allocated for an array of objects.
 // The behavior of the standard library implementation of this function is undefined unless ptr is a null pointer or is a pointer previously obtained from the standard library implementation of operator new[](std::size_t) or operator new[](std::size_t, std::nothrow_t).
//std::set_new_handler([]() { std::cout << "new: failed to allocate memory" << std::endl; });
