/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:12:58 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:03:04 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
    std::cout << "Animal default constructor called" << std::endl;
    _type = "Animal";
}

Animal::Animal( Animal &ref ) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = ref;
}

Animal::~Animal( void ) {
    std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=( Animal &rhs ) {
    std::cout << "Animal assignation operator called" << std::endl;
    _type = rhs._type;
    return( *this );
}

const std::string Animal::getType( void ) const {
    return( _type );
}

void    Animal::makeSound( void ) const {
    std::cout << "Animal is mute :(" << std::endl;
}