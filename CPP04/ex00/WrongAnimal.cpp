/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:04:02 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 05:56:06 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
    std::cout << "WrongAnimal default constructor called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( WrongAnimal &ref ) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = ref;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=( WrongAnimal &rhs ) {
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    _type = rhs._type;
    return( *this );
}

const std::string WrongAnimal::getType( void ) const {
    return( _type );
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal is mute :(" << std::endl;
}