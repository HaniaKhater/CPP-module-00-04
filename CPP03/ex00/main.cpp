/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:24:19 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 02:29:26 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main () {
	ClapTrap	c("Carlos");
	ClapTrap	d("Dimitris");
	
	c.displayPts();
	d.displayPts();
	c.attack("Dimitris");
	d.takeDamage(4);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	d.beRepaired(1);
	c.displayPts();
	d.displayPts();
	return 0;
}