/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:05:47 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:14:55 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type(WANIMAL_TYPE)
{
    std::cout   << WANIMAL_TYPE << " " << DEF_CONST  <<  std::endl;    
}

WrongAnimal::WrongAnimal(std::string  type) : _type(type)
{
    std::cout   << WANIMAL_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
}

WrongAnimal::WrongAnimal(const    WrongAnimal& other)
{
    std::cout   << WANIMAL_TYPE << " " << CPY_CONST << other._type << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout   << WANIMAL_TYPE << " " << DECONST << this->_type << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const    WrongAnimal& rhs)
{
    std::cout   << WANIMAL_TYPE << " " << OP_CALL << this->_type << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);       
}

std::string    WrongAnimal::getType(void)
{
    std::cout  <<   this->_type << " : GetType Called!!!" << std::endl;
    return (this->_type);
}

void    WrongAnimal::makeSound(void)
{
    std::cout   << this->_type << " said : " << WANIMAL_SOUND << std::endl;
}
