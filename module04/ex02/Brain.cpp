/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:34:28 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/30 16:34:32 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout   << BRAIN_TYPE << " " << DEF_CONST  <<  std::endl;    
    for (int i = 0; i < MAX_IDEA; i++)
        this->ideas[i] = "<empty>";
}

Brain::Brain(std::string    input)
{
    std::cout   << BRAIN_TYPE << " " << STR_CONST  <<  std::endl;    
    for (int i = 0; i < MAX_IDEA; i++)
        this->ideas[i] = input;
}

Brain::Brain(const    Brain& other)
{
    std::cout   << BRAIN_TYPE << " " << CPY_CONST << std::endl;
    *this = other;
}

Brain::~Brain(void)
{
    std::cout   << BRAIN_TYPE << " " << DECONST << std::endl;
    for (size_t i = 0; i < MAX_IDEA; i++)
        this->ideas[i].erase();
    
}

Brain  &Brain::operator=(const    Brain& rhs)
{
    std::cout   << BRAIN_TYPE << " " << OP_CALL << std::endl;
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < MAX_IDEA; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);       
}

std::string     Brain::getIdea(int  index)
{
    return (this->ideas[index % MAX_IDEA]);
}

void    Brain::setIdea(int  index, std::string&  ideas)
{
    this->ideas[index % MAX_IDEA] = ideas;
}
