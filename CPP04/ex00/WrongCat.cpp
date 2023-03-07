/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:04:07 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 04:07:54 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat( WrongCat &ref ) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = ref;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cout << "WrongCat assign constructor has been called" << std::endl;
	_type = rhs._type;
	return *this;
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Meow Meow" << std::endl;
}