/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:04:05 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:25:13 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     DOG_HPP
# define    DOG_HPP

#include    "Animal.hpp"

#define     DOG_TYPE    "DOG"
#define     DOG_SOUND   "BarkKKKKK"

class   Dog : public    Animal
{
    public  :
        Dog(void);
        ~Dog(void);
        Dog(const   std::string  &type);
        Dog(const   Dog &other);
        Dog &operator=(const    Dog &rhs);
        
        void    makeSound(void);

};

#endif
