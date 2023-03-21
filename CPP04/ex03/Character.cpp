/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:30:18 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 20:15:58 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("Jane") {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

Character::Character( std::string const &name ) : _name(name) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

Character::~Character( void ) {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != NULL) {
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
            std::cout << "- Materia " << _inventory[i]->getType() << " equipped -" << std::endl;
            return;
        }
    }
    std::cout << "- No available slort for materia -" << std::endl;
}

void    Character::unequip( int idx ) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        _inventory[idx] = NULL;
    }
}

void    Character::use( int idx, ICharacter& target ) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        std::cout << "* " << this->getName();
        _inventory[idx]->use(target);
    }
}