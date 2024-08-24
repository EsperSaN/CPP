/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:06:03 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:25:36 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     WRONGANIMAL_HPP
# define    WRONGANIMAL_HPP

#include    <iostream>

#define     DEF_CONST   "Default Constructor Call : "
#define     DECONST     "Deconstructor Call : "
#define     STR_CONST   "String Constructor Call : "
#define     CPY_CONST   "Copy Constructor Call : "
#define     OP_CALL     "Assignment Op Call : "

# define    WANIMAL_TYPE    "Wrong ANIMAL"
#define     WANIMAL_SOUND   "WRONG AnImAl SoUNd!!!"

class WrongAnimal
{
    protected   :
        std::string     _type;
    
    public      :
    //OC
        WrongAnimal(void);
        WrongAnimal(std::string  type);
        WrongAnimal(const    WrongAnimal&  other);
        virtual ~WrongAnimal(void);
        WrongAnimal  &operator=(const    WrongAnimal&     rhs);
    //medthod
        std::string     getType(void);
        virtual void    makeSound(void);
};

#endif
