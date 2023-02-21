/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:17:00 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 05:17:20 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	createName( void ) {
	char	name[4];
	std::string vowel;
	std::string	cons;
	
	srand(time(NULL));
	vowel = "aouiye";
	cons = "bcdfghjklmnprstvwxz";
	name[0] = cons[std::rand() % 19];
	name[1] = vowel[std::rand() % 7];
	name[2] = cons[std::rand() % 19];
	name[3] = '\0';
	return (name);
}

Zombie*	newZombie( std::string name ) {
	Zombie*	created = new Zombie();

	if (name.empty())
		created->setName(createName());
	else
		created->setName(name);
	return (created);
}
