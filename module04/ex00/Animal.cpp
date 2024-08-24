/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:02:46 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:00:03 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Animal.hpp"

Animal::Animal(void) : _type(ANIMAL_TYPE)
{
    std::cout   << ANIMAL_TYPE << " " << DEF_CONST  <<  std::endl;    
}

Animal::Animal(std::string  type) : _type(type)
{
    std::cout   << ANIMAL_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
}

Animal::Animal(const    Animal& other)
{
    std::cout   << ANIMAL_TYPE << " " << CPY_CONST << other._type << std::endl;
    *this = other;
}

Animal::~Animal(void)
{
    std::cout   << ANIMAL_TYPE << " " << DECONST << this->_type << std::endl;
}

Animal  &Animal::operator=(const    Animal& rhs)
{
    std::cout   << ANIMAL_TYPE << " " << OP_CALL << this->_type << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);       
}

std::string    Animal::getType(void)
{
    std::cout  <<   this->_type << " : GetType Called!!!" << std::endl;
    return (this->_type);
}

void    Animal::makeSound(void)
{
    std::cout   << this->_type << " said : " << ANIMAL_SOUND << std::endl;
}
