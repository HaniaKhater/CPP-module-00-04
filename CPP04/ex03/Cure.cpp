/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:05:44 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 03:12:08 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( Cure &ref ) : AMateria("cure") {
    std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::Cure( std::string type ) : AMateria(type) {
    std::cout << "Cure custom constructor called" << std::endl;
}

Cure::~Cure( void ) {
    std::cout << "Default destructor called" << std::endl;
}

Cure &Cure::operator=( Cure &rhs ) {
	std::cout << "Cure assignation operator called" << std::endl;
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
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}