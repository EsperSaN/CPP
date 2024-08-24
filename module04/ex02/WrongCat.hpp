/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:07:11 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/28 21:26:19 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     WRONGCAT_HPP
# define    WRONGCAT_HPP

#include    "WrongAnimal.hpp"

#define     WCAT_TYPE    "Wrong Cat"
#define     WCAT_SOUND   "Wrong meow!!!????"

class   WrongCat : public    WrongAnimal
{
    public  :
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(const   std::string  &type);
        WrongCat(const   WrongCat &other);
        WrongCat &operator=(const    WrongCat &rhs);
        
        void    makeSound(void);

};

#endif
