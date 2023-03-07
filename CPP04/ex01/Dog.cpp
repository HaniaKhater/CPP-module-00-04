/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:11 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:05:40 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog( Dog &ref ) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = ref;
    _brain = new Brain();
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog assign constructor has been called" << std::endl;
	_type = rhs._type;
	return *this;
}

void    Dog::makeSound( void ) const {
    std::cout << "Woof Woof" << std::endl;
}