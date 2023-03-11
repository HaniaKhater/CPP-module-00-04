/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 04:33:47 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/12 00:31:54 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_name = "Dimy";
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 30;
}

DiamondTrap::DiamondTrap( std::string name ) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap &ref ) : ClapTrap(ref._name + "_clap_name"), ScavTrap(ref._name), FragTrap(ref._name), _name(ref._name) {
	_hitPts = ref._hitPts;
	_energyPts = ref._energyPts;
	_attackDmg = ref._attackDmg;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & rhs){
	if (this == &rhs)
		return(*this);
	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return(*this);
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "Who am I? ...My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << "_clap_name" << std::endl;
}