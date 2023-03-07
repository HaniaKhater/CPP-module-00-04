/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:12:58 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:36:05 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) {
    std::cout << "AAnimal default constructor called" << std::endl;
    _type = "AAnimal";
}

AAnimal::AAnimal( AAnimal &ref ) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = ref;
}

AAnimal::~AAnimal( void ) {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal  &AAnimal::operator=( AAnimal &rhs ) {
    std::cout << "AAnimal assignation operator called" << std::endl;
    _type = rhs._type;
    return( *this );
}

const std::string AAnimal::getType( void ) const {
    return( _type );
}