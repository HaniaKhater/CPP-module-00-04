/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:13:22 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 20:11:22 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _count(0) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource( MateriaSource &ref ) : _count(0) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = ref._inventory[i];
    }
}

MateriaSource::~MateriaSource( void ) {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
}

MateriaSource  &MateriaSource::operator=( MateriaSource &rhs ) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = rhs._inventory[i];
    }
    return( *this );
}

void    MateriaSource::learnMateria(AMateria *m) {
    if (_count < 4 && m) {
        for (int i = 0; i < 4; i++) {
            if (_inventory[i] == NULL) {
                _inventory[i] = m;
                _count++;
                return ;
            }
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] && _inventory[i]->getType() == type) {
            return _inventory[i]->clone();
        }
    }
    return NULL;
}