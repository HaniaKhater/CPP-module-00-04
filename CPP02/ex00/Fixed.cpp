/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:06 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/03 22:07:45 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& ref ) {
    std::cout << "Copy constructor called" << std::endl;
	this->_raw_value =  ref.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}

Fixed   &Fixed::operator=( Fixed fixed ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_raw_value = fixed.getRawBits();
    return ( *this );
}

int     Fixed::getRawBits( void ) const {
    std::cout << __func__ << " member function called" << std::endl;
    return ( this->_raw_value );
}

void    Fixed::setRawBits( int const raw ) {
    std::cout << __func__ << " member function called" << std::endl;
    this->_raw_value = raw;
}