/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:24:19 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 04:13:32 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main () {
	ClapTrap	c("Carlos");
	ScavTrap	d("Dimitris");
	
	c.displayPts();
	d.displayPts();
	c.attack("Dimitris");
	d.takeDamage(4);
	d.attack("Carlos");
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