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
	this->_name = name;
}

std::string		Zombie::getName( void ) const {
	return (this->_name);
}

void			Zombie::announce( void ) {
	std::cout << this->_name << " : BrraiiiiiiinnnzzzZ..." << std::endl;
}
