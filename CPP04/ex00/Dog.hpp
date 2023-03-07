/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:14 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 04:28:00 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog : public Animal {
    public:
        Dog( void );
        Dog( Dog &ref );
        ~Dog( void );
        Dog &operator=( const Dog &rhs );
        void    makeSound( void ) const;
};

#endif