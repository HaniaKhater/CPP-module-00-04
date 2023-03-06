/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 02:36:16 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 06:01:19 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "Scavy";
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "ScavTrap naming constructor called" << std::endl;
	_name = name;
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
}

ScavTrap::ScavTrap( ScavTrap &ref ) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = ref._name;
	_hitPts = ref._hitPts;
	_energyPts = ref._energyPts;
	_attackDmg = ref._attackDmg;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & rhs){
	if (this == &rhs)
		return(*this);
	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return(*this);
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	if (!this->hasEnergy()) return;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	this->_hitPts -= this->_attackDmg;
	this->_energyPts--;
}