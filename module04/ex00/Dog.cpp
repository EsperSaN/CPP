/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:03:50 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:59:07 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(DOG_TYPE)
{
    std::cout   << DOG_TYPE << " " << DEF_CONST  <<  std::endl;    
}

Dog::Dog(const std::string  &type) :  Animal(type)
{
    std::cout   << DOG_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
}

Dog::Dog(const    Dog& other)
{
    std::cout   << DOG_TYPE << " " << CPY_CONST << other._type << std::endl;
    *this = other;
}

Dog::~Dog(void)
{
    std::cout   << DOG_TYPE << " " << DECONST << this->_type << std::endl;
}

Dog  &Dog::operator=(const    Dog& rhs)
{
    std::cout   << DOG_TYPE << " " << OP_CALL << this->_type << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);       
}

void    Dog::makeSound(void)
{
    std::cout   << this->_type << " said : " << DOG_SOUND << std::endl;
}
