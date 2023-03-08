/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:05:49 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 03:12:14 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ) : AMateria("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( Ice &ref ) : AMateria("ice") {
    std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::Ice( std::string type ) : AMateria(type) {
    std::cout << "Ice custom constructor called" << std::endl;
}

Ice::~Ice( void ) {
    std::cout << "Default destructor called" << std::endl;
}

Ice &Ice::operator=( Ice &rhs ) {
	std::cout << "Ice assignation operator called" << std::endl;
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
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}