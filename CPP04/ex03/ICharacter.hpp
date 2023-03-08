/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:03:05 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 02:52:01 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class ICharacter {
    public:
        virtual ~ICharacter( void ) {}
        virtual std::string const &getName( void ) const = 0;
        virtual void equip( AMateria *m ) = 0;
        virtual void unequip( int idx ) = 0;
        virtual void use( int idx, ICharacter &target ) = 0;
};

#endif