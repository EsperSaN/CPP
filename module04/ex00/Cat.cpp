/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:03:03 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:25:05 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void) : Animal(CAT_TYPE)
{
    std::cout   << CAT_TYPE << " " << DEF_CONST  <<  std::endl;    
}

Cat::Cat(const std::string  &type) :  Animal(type)
{
    std::cout   << CAT_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
}

Cat::Cat(const    Cat& other)
{
    std::cout   << CAT_TYPE << " " << CPY_CONST << other._type << std::endl;
    *this = other;
}

Cat::~Cat(void)
{
    std::cout   << CAT_TYPE << " " << DECONST << this->_type << std::endl;
}

Cat  &Cat::operator=(const    Cat& rhs)
{
    std::cout   << CAT_TYPE << " " << OP_CALL << this->_type << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);       
}

void    Cat::makeSound(void)
{
    std::cout   << this->_type << " said : " << CAT_SOUND << std::endl;
}
