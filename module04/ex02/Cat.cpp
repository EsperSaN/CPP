/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:03:03 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/30 16:32:41 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(void) : Animal(CAT_TYPE)
{
    std::cout   << CAT_TYPE << " " << DEF_CONST  <<  std::endl;
    _brain = new(std::nothrow)  Brain(CAT_THINK);
    if (_brain == NULL)
    {
        std::cerr << "Cannot Get Enough Memory Allocation Exit!!!" << std::endl;
        std::terminate();
    }
}

Cat::Cat(const std::string  &type) :  Animal(type)
{
    std::cout   << CAT_TYPE << " " << STR_CONST <<  this->_type <<  " has born" <<  std::endl;
    _brain = new(std::nothrow)  Brain(CAT_THINK);
    if (_brain == NULL)
    {
        std::cerr << "Cannot Get Enough Memory Allocation Exit!!!" << std::endl;
        std::terminate();
    }
}

Cat::Cat(const    Cat& other)
{
    std::cout   << CAT_TYPE << " " << CPY_CONST << other._type << std::endl;
    this->operator=(other);
}

Cat::~Cat(void)
{
    std::cout   << CAT_TYPE << " " << DECONST << this->_type << std::endl;
    if (_brain != NULL)
        delete this->_brain;
}

Cat  &Cat::operator=(const    Cat& rhs)
{
    Brain   *tmpBrain;
    std::cout   << CAT_TYPE << " " << OP_CALL << this->_type << std::endl;
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

void    Cat::makeSound(void)
{
    std::cout   << this->_type << " said : " << CAT_SOUND << std::endl;
}

std::string Cat::getIdea(int    index)
{
    return this->_brain->getIdea(index);
}

void    Cat::setIdea(int    index, std::string  idea)
{
    return this->_brain->setIdea(index, idea);
}
