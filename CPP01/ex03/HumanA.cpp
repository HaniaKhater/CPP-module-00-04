/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:45:28 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/23 09:45:29 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>


HumanA::HumanA( std::string name, Weapon &first ) : _name(name), _weapon(first) {}

HumanA::~HumanA( void ) {}

void    HumanA::setName( std::string name ) {
    this->_name = name;
}

std::string 	HumanA::getName( void ) const {
    return ( this->_name );
}

void    HumanA::attack( void ) const {
    std::cout << getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}
