/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:03:50 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/30 15:27:59 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(DOG_TYPE)
{
    std::cout   << DOG_TYPE << " " << DEF_CONST  <<  std::endl;
    _brain = new(std::nothrow)  Brain(DOG_THINK);
    if (_brain == NULL)
    {
        std::cerr << "Cannot Get Enough Memory Allocation Exit!!!" << std::endl;
        std::terminate();
    }
}

Dog::Dog(const std::string  &type) :  Animal(type)
{
    std::cout   << DOG_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
    _brain = new(std::nothrow)  Brain(DOG_THINK);
    if (_brain == NULL)
    {
        std::cerr << "Cannot Get Enough Memory Allocation Exit!!!" << std::endl;
        std::terminate();
    }
}

Dog::Dog(const    Dog& other)
{
    std::cout   << DOG_TYPE << " " << CPY_CONST << other._type << std::endl;
    this->operator=(other);
}

Dog::~Dog(void)
{
    std::cout   << DOG_TYPE << " " << DECONST << this->_type << std::endl;
    if (_brain != NULL)
        delete this->_brain;
}

Dog  &Dog::operator=(const    Dog& rhs)
{
    Brain   *tmpBrain;
    std::cout   << DOG_TYPE << " " << OP_CALL << this->_type << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;

    tmpBrain = new(std::nothrow) Brain(*(rhs._brain));
    if (tmpBrain == NULL)
    {
        std::cerr << "Cannot Get Enough Memory Allocation Exit!!!" << std::endl;
        std::terminate();
    }
    if (this->_brain != NULL)
        delete this->_brain;
    this->_brain = tmpBrain;
    return (*this);       
}

void    Dog::makeSound(void)
{
    std::cout   << this->_type << " said : " << DOG_SOUND << std::endl;
}

std::string Dog::getIdea(int    index)
{
    return this->_brain->getIdea(index);
}

void    Dog::setIdea(int    index, std::string  idea)
{
    return this->_brain->setIdea(index, idea);
}
