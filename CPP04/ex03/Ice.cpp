/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:05:49 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 20:16:50 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ) : AMateria("ice") {
}

Ice::Ice( Ice &ref ) : AMateria("ice") {
	(void)ref;
}

Ice::Ice( std::string type ) : AMateria(type) {
}

Ice::~Ice( void ) {
}

Ice &Ice::operator=( Ice &rhs ) {
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	return *this;
}

AMateria    *Ice::clone( void ) const {
    Ice    *cloned = new Ice(this->_type);
    return cloned;
}

void    Ice::use( ICharacter &target ) {
    std::cout << " shoots an ice bolt at " << target.getName() << " *" << std::endl;
}