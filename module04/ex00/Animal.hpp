/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:01:55 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 20:56:12 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ANIMAL_HPP
# define    ANIMAL_HPP

#include    <iostream>

#define     DEF_CONST   "Default Constructor Call : "
#define     DECONST     "Deconstructor Call : "
#define     STR_CONST   "String Constructor Call : "
#define     CPY_CONST   "Copy Constructor Call : "
#define     OP_CALL     "Assignment Op Call : "

# define    ANIMAL_TYPE    "ANIMAL"
#define     ANIMAL_SOUND   "AnImAl SoUNd!!!"
class Animal
{
    protected   :
        std::string     _type;
    
    public      :
    //OC
        Animal(void);
        Animal(std::string  type);
        Animal(const    Animal&  other);
        virtual ~Animal(void);
        Animal  &operator=(const    Animal&     rhs);
    //medthod
        std::string     getType(void);
        virtual void    makeSound(void);
};

#endif
