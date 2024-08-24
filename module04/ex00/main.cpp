/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:07:56 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 22:09:21 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include    "Cat.hpp"
#include    "WrongCat.hpp"


int main()
{
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    Animal  *a = new    Animal();
    Animal  *b = new    Dog();
    Animal  *c  = new   Cat();
    WrongAnimal  *d  = new   WrongAnimal();
    WrongAnimal  *e  = new  WrongCat();
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    a->makeSound();
    b->makeSound();
    c->makeSound();
    d->makeSound();
    e->makeSound();
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    std::cout << "Type : " << a->getType() << std::endl;
    std::cout << "Type : " << b->getType() << std::endl;
    std::cout << "Type : " << c->getType() << std::endl;
    std::cout << "Type : " << d->getType() << std::endl;
    std::cout << "Type : " << e->getType() << std::endl;
    std::cout << "\n-------------------------------------------- \n" << std::endl;

    *a = *c;
    a->makeSound();
    
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    delete  a;
    delete  b;
    delete  c;
    delete  d;
    delete  e;
    
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    a = new    Animal("a the Animal");
    b = new    Dog("b the DOG");
    c  = new   Cat("c the CAT");
    d  = new   WrongAnimal("d the Wrong animal");
    e  = new   WrongCat("e the Wrong cat");
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    a->makeSound();
    b->makeSound();
    c->makeSound();
    d->makeSound();
    e->makeSound();
    std::cout << "\n-------------------------------------------- \n" << std::endl;    
    std::cout << "Type : " << a->getType() << std::endl;
    std::cout << "Type : " << b->getType() << std::endl;
    std::cout << "Type : " << c->getType() << std::endl;
    std::cout << "Type : " << d->getType() << std::endl;
    std::cout << "Type : " << e->getType() << std::endl;
    std::cout << "\n-------------------------------------------- \n" << std::endl;   
    Animal &g = *a;
    *a = g;
    a->makeSound();
    std::cout << "\n-------------------------------------------- \n" << std::endl;
    delete  a;
    delete  b;
    delete  c;
    delete  d;
    delete  e;
}
