/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:04:05 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/29 15:57:41 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     DOG_HPP
# define    DOG_HPP

#include    "Animal.hpp"
#include    "Brain.hpp"
#define     DOG_TYPE    "DOG"
#define     DOG_SOUND   "BarkKKKKK"
#define     DOG_THINK   "Bonk Bonk"

class   Dog : public    Animal
{
    private :
        Brain   *_brain;
    public  :
        Dog(void);
        ~Dog(void);
        Dog(const   std::string  &type);
        Dog(const   Dog &other);
        Dog &operator=(const    Dog &rhs);
        
        void    makeSound(void);
        std::string getIdea(int index);
        void        setIdea(int index, std::string  idea);

};

#endif
