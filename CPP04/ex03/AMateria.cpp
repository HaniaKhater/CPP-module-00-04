/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:03:00 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 20:10:18 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) : _type("unknown") {
}

AMateria::AMateria( AMateria &ref ) : _type(ref._type) {
}

AMateria::AMateria( const std::string &type ) : _type(type) {
}

AMateria::~AMateria( void ) {
}

AMateria  &AMateria::operator=( AMateria &rhs ) {
    _type = rhs._type;
    return( *this );
}

std::string const   &AMateria::getType( void ) const {
    return( _type );
}

void AMateria::use( ICharacter &target )
{
	std::cout << "- Materia used on " << target.getName() << "-" << std::endl;
}