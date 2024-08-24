/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:07:56 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/30 16:33:58 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include    "Cat.hpp"
#include    "WrongCat.hpp"


int main()
{
    
    Cat     yy("test");
}
// int main()
// {
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     Animal  *a = new    Dog();
//     Animal  *b = new    Dog();
//     Animal  *c  = new   Cat();
//     WrongAnimal  *d  = new   WrongAnimal();
//     WrongAnimal  *e  = new  WrongCat();
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     a->makeSound();
//     b->makeSound();
//     c->makeSound();
//     d->makeSound();
//     e->makeSound();
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     std::cout << "Type : " << a->getType() << std::endl;
//     std::cout << "Type : " << b->getType() << std::endl;
//     std::cout << "Type : " << c->getType() << std::endl;
//     std::cout << "Type : " << d->getType() << std::endl;
//     std::cout << "Type : " << e->getType() << std::endl;
//     std::cout << "\n-------------------------------------------- \n" << std::endl;

//     *a = *c;
//     a->makeSound();
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     delete  a;
//     delete  b;
//     delete  c;
//     delete  d;
//     delete  e;
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     b = new    Dog("b the DOG");
//     c  = new   Cat("c the CAT");
//     d  = new   WrongAnimal("d the Wrong animal");
//     e  = new   WrongCat("e the Wrong cat");
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     a->makeSound();
//     b->makeSound();
//     c->makeSound();
//     d->makeSound();
//     e->makeSound();
//     std::cout << "\n-------------------------------------------- \n" << std::endl;    
//     std::cout << "Type : " << a->getType() << std::endl;
//     std::cout << "Type : " << b->getType() << std::endl;
//     std::cout << "Type : " << c->getType() << std::endl;
//     std::cout << "Type : " << d->getType() << std::endl;
//     std::cout << "Type : " << e->getType() << std::endl;
//     std::cout << "\n-------------------------------------------- \n" << std::endl;   
    
//     Animal &g = *a;
//     *a = g;
//     a->makeSound();
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     delete  a;
//     delete  b;
//     delete  c;
//     delete  d;
//     delete  e;
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
//     std::cout << "Brain test !!!!!\n" << std::endl;

//     Animal **animal;
    
//     animal = new Animal*[100];
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
    
//     for (int i = 0; i < 50; i++)
//         animal[i] = new Dog("Big brain Dog");
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
    
//     for (int j = 50; j < 100; j++)
//         animal[j] = new Cat("Smol Brain Cat");
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
    
//     animal[60]->makeSound();
//     animal[1]->makeSound();
//      ((Dog *)(animal[99]))->setIdea(1, "WFT");
//     std::cout << ((Dog * )animal[99])->getIdea(1) << std::endl << ((Cat *)animal[99])->getIdea(109) << std::endl;

//     std::cout << "\n---------------------Brain Tranfer ------------------- \n" << std::endl;

//     std::cout << ((Dog * )animal[1])->getIdea(1) << std::endl << ((Cat *)animal[99])->getIdea(1) << std::endl;
    
//     *(Cat *)animal[1] = *(Cat *)animal[99];

//     std::cout << ((Dog * )animal[1])->getIdea(1) << std::endl << ((Cat *)animal[99])->getIdea(1) << std::endl;
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
    
//     for (int o = 0 ; o < 100; o++)
//     {
//         std::cout << "del the : " << o << std::endl;
//         delete animal[o];
//     }
    
//     std::cout << "\n-------------------------------------------- \n" << std::endl;
    
//     delete [] animal;

// }
