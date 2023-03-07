/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:04:12 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:24:22 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog( void ) {
    std::cout << "WrongDog default constructor called" << std::endl;
    _type = "WrongDog";
}

WrongDog::WrongDog( WrongDog &ref ) {
    std::cout << "WrongDog copy constructor called" << std::endl;
    *this = ref;
}

WrongDog::~WrongDog( void ) {
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &rhs) {
	std::cout << "WrongDog assign constructor has been called" << std::endl;
	_type = rhs._type;
	return *this;
}

void    WrongDog::makeSound( void ) const {
    std::cout << "Woof Woof" << std::endl;
}