/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:24:09 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/04 02:37:39 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &ref ) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap::