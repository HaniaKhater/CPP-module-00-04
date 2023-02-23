/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:45:35 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/23 09:45:36 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {}

HumanB::~HumanB( void ) {}

void    	HumanB::setName( std::string name ) {
    this->_name = name;
}

const std::string HumanB::getName( void ) const {
    return ( this->_name );
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void    HumanB::attack( void ) const {
	if (this->_weapon)
    	std::cout << getName() << " attacks with their " << this->_weapon->getType() << std::endl;
	else
    	std::cout << getName() << " attacks with their " << "hands" << std::endl;
		
}
