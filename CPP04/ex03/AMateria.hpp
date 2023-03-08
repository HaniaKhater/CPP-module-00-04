/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:02:57 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 02:46:40 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria {
    protected:
        std::string     _type;
    public : 
        AMateria( void );
        AMateria(std::string const &type);
        AMateria( AMateria &ref );
        virtual ~AMateria( void );
        AMateria    &operator=( AMateria &rhs );
        std::string const &getType() const; // Returns the materia type
        virtual AMateria *clone() const = 0;
        virtual void use( ICharacter &target );
};

#endif