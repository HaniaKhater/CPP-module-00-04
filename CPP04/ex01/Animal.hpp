/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:01 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:17:45 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal {
    public:
        Animal( void );
        Animal( Animal &ref );
        virtual ~Animal( void );
        Animal      &operator=( Animal &rhs );
        const std::string getType( void ) const;
        virtual void    makeSound( void ) const;
    protected:
        std::string _type;
};

#endif