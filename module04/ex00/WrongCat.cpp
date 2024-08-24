/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:06:40 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:25:52 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(WCAT_TYPE)
{
    std::cout   << WCAT_TYPE << " " << DEF_CONST  <<  std::endl;    
}

WrongCat::WrongCat(const std::string  &type) :  WrongAnimal(type)
{
    std::cout   << WCAT_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
}

WrongCat::WrongCat(const    WrongCat& other)
{
    std::cout   << WCAT_TYPE << " " << CPY_CONST << other._type << std::endl;
    *this = other;
}

WrongCat::~WrongCat(void)
{
    std::cout   << WCAT_TYPE << " " << DECONST << this->_type << std::endl;
}

WrongCat  &WrongCat::operator=(const    WrongCat& rhs)
{
    std::cout   << WCAT_TYPE << " " << OP_CALL << this->_type << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);       
}

void    WrongCat::makeSound(void)
{
    std::cout   << this->_type << " said : " << WCAT_SOUND << std::endl;
}
