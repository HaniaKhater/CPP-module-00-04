/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:05:44 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 20:16:07 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("cure") {
}

Cure::Cure( Cure &ref ) : AMateria("cure") {
	(void)ref;
}

Cure::Cure( std::string type ) : AMateria(type) {
}

Cure::~Cure( void ) {
}

Cure &Cure::operator=( Cure &rhs ) {
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	return *this;
}

AMateria    *Cure::clone( void ) const {
    Cure    *cloned = new Cure(this->_type);
    return cloned;
}

void    Cure::use( ICharacter &target ) {
    std::cout << " heals " << target.getName() << "'s wounds *" << std::endl;
}