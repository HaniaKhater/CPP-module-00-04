/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 04:22:40 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/12 00:02:33 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = "Fragy";
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap( std::string name ) {
	std::cout << "FragTrap constructor called" << std::endl;
	_name = name;
	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap( FragTrap &ref ) : ClapTrap(ref._name) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	_name = ref._name;
	_hitPts = ref._hitPts;
	_energyPts = ref._energyPts;
	_attackDmg = ref._attackDmg;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & rhs){
	if (this == &rhs)
		return(*this);
	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return(*this);
}

void	FragTrap::attack( const std::string& target ) {
	if (!this->hasEnergy()) return;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
	this->_hitPts -= this->_attackDmg;
	this->_energyPts--;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "High five please!" << std::endl;
}