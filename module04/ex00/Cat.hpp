/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:03:17 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:24:45 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CAT_HPP
# define    CAT_HPP

#include    "Animal.hpp"

#define     CAT_TYPE    "Cat"
#define     CAT_SOUND   "meow!!!????"

class   Cat : public    Animal
{
    public  :
        Cat(void);
        ~Cat(void);
        Cat(const   std::string  &type);
        Cat(const   Cat &other);
        Cat &operator=(const    Cat &rhs);
        
        void    makeSound(void);

};

#endif
