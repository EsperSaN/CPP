/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:18:12 by pruenrua          #+#    #+#             */
/*   Updated: 2024/06/30 15:02:13 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include    <iostream>
#define     DEF_CONST   "Default Constructor Call : "
#define     DECONST     "Deconstructor Call : "
#define     STR_CONST   "String Constructor Call : "
#define     CPY_CONST   "Copy Constructor Call : "
#define     OP_CALL     "Assignment Op Call : "

# define    MAX_IDEA        100
# define    BRAIN_TYPE    "Brain"

class Brain
{
    private   :
        std::string     ideas[MAX_IDEA];
    
    public      :
        Brain(void);
        Brain(std::string   input);
        Brain(const    Brain&  other);
        virtual ~Brain(void);
        Brain  &operator=(const    Brain&     rhs);
        std::string     getIdea(int     index);
        void            setIdea(int     index, std::string&  ideas);
        
 
};

#endif
