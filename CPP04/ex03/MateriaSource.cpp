/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:13:22 by hania             #+#    #+#             */
/*   Updated: 2023/03/12 02:35:45 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _count(0) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource( MateriaSource &ref ) : _count(ref._count) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = ref._inventory[i];
    }
}

MateriaSource::~MateriaSource( void ) {
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < _count; ++i) {
        if (_inventory[i] != NULL) {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}

MateriaSource  &MateriaSource::operator=( MateriaSource &rhs ) {
    std::cout << "MateriaSource assignation operator called" << std::endl;
    if (this == &rhs)
		return *this;
	for (int i = 0; i < _count; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

void    MateriaSource::learnMateria(AMateria *m) {
    if (_count < 4 && m) {
        for (int i = 0; i < _count; i++) {
            if (_inventory[i] == NULL) {
                _inventory[i] = m->clone();
                _count++;
                break;
            }
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < _count; i++) {
        if (_inventory[i] && _inventory[i]->getType() == type) {
            return _inventory[i]->clone();
        }
    }
    return NULL;
}