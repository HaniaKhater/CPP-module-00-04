/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:24:19 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 05:40:37 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main () {
	FragTrap	c("Carlos");
	DiamondTrap	d("Dimitris");
	
	c.displayPts();
	d.displayPts();
	c.attack("Dimitris");
	d.takeDamage(4);
	d.attack("Carlos");
	d.whoAmI();
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	c.displayPts();
	d.displayPts();
	d.guardGate();
	return 0;
}