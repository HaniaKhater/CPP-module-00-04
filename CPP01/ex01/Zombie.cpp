/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:28:20 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 05:28:24 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {
	std::cout << getName() << " is getting destroyed" << std::endl;
};

void			Zombie::setName( std::string name ) {
	if (name.empty())
		this->_name = createName();
	else
		this->_name = name;
}

std::string		Zombie::getName( void ) const {
	return (this->_name);
}

void			Zombie::announce( void ) {
	std::cout << this->_name << ": BrraiiiiiiinnnzzzZ..." << std::endl;
}

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
