/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:05:51 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 03:26:39 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice( void );
        Ice( Ice &ref );
        Ice( std::string type);
        virtual ~Ice( void );
        Ice    &operator=( Ice &rhs );
        AMateria *clone() const;
        void    use( ICharacter &target );    
};

#endif