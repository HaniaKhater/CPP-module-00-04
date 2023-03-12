/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:30:18 by hania             #+#    #+#             */
/*   Updated: 2023/03/12 02:43:48 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("Jane") {
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
        _inventory[i] = NULL;
    }
}

Character::Character( std::string const &name ) : _name(name) {
    std::cout << "Character custom constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}

Character::~Character( void ) {
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (_inventory[i] != NULL) {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}

Character &Character::operator=( Character &rhs ) {
	std::cout << "Character Assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i]->clone();
	}
	this->_name = rhs._name;
	return *this;
}

std::string const   &Character::getName( void ) const {
    return _name;
}

void    Character::equip( AMateria* m ) {
    for (int i = 0; i < 4; ++i) {
        if (!_inventory[i]) {
            _inventory[i] = m;
            return;
        }
    }
}

void    Character::unequip( int idx ) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx] = NULL;
    }
    AMateria *unequiped = this->_inventory[idx];
	this->_inventory[idx] = NULL;
	delete unequiped;
}

void    Character::use( int idx, ICharacter& target ) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx]->use(target);
    }
}