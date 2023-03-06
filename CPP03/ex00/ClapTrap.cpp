/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:24:09 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 02:02:48 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	_name = "Clappy";
	_hitPts = 10;
	_energyPts = 10;
	_attackDmg = 0;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
	std::cout << "ClapTrap named constructor" << std::endl;
	_hitPts = 10;
	_energyPts = 10;
	_attackDmg = 0;
}

ClapTrap::ClapTrap( ClapTrap &ref ) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = ref._name;
	_hitPts = ref._hitPts;
	_energyPts = ref._energyPts;
	_attackDmg = ref._attackDmg;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap default destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;	
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << this->_name  << " took " << amount << " damage points!" << std::endl;
	this->_attackDmg += amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "ClapTrapp " << this->_name << " repaired itself and got " << amount << " hit point back!" << std::endl;
	this->_hitPts += amount;
}

void	ClapTrap::displayPts( void ) const {
	std::cout << "ClapTrap " << this->_name << " has " << this->_hitPts << " hit points, " << this->_energyPts << " energy points, and " << this->_attackDmg << " damage points." << std::endl;
}

bool	ClapTrap::hasEnergy( void ) const {
	if (this->_energyPts > 0) return true;
	else	return false;
}