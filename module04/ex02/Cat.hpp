/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:03:17 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/30 16:32:53 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CAT_HPP
# define    CAT_HPP

#include    "Animal.hpp"
#include    "Brain.hpp"
#define     CAT_TYPE    "Cat"
#define     CAT_SOUND   "meow!!!????"
#define     CAT_THINK   "meownnnnnnnnnnn"

class   Cat : public    Animal
{
    private :
        Brain   *_brain;        
    public  :
        Cat(void);
        ~Cat(void);
        Cat(const   std::string  &type);
        Cat(const   Cat &other);
        Cat &operator=(const    Cat &rhs);
        
        void        makeSound(void);
        std::string getIdea(int index);
        void        setIdea(int index, std::string  idea);

};

#endif
