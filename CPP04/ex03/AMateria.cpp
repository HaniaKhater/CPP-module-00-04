/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:03:00 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 03:11:18 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) : _type("unknown") {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria( AMateria &ref ) : _type(ref._type) {
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria( const std::string &type ) : _type(type) {
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria( void ) {
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria  &AMateria::operator=( AMateria &rhs ) {
    std::cout << "AMateria assignation operator called" << std::endl;
    _type = rhs._type;
    return( *this );
}

std::string const   &AMateria::getType( void ) const {
    return( _type );
}

void AMateria::use( ICharacter &target )
{
	std::cout << target.getName() << std::endl;
}