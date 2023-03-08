/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:30:18 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 03:46:07 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("Jane") {
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

Character::Character( std::string const &name ) : _name(name) {
    std::cout << "Character custom constructor called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

Character::~Character( void ) {
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (_inventory[i]) {
            delete _inventory[i];
        }
    }
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
}

void    Character::use( int idx, ICharacter& target ) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx]->use(target);
    }
}