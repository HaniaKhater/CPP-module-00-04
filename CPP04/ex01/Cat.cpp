/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:05 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:03:53 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat( Cat &ref ) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = ref;
    _brain = new Brain();
}

Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat assign constructor has been called" << std::endl;
	_type = rhs._type;
	return *this;
}

void    Cat::makeSound( void ) const {
    std::cout << "Meow Meow" << std::endl;
}