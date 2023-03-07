/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:04:15 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 04:09:52 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class   WrongDog : public WrongAnimal {
    public:
        WrongDog( void );
        WrongDog( WrongDog &ref );
        ~WrongDog( void );
        WrongDog &operator=( const WrongDog &rhs );
        void    makeSound( void ) const;
};

#endif