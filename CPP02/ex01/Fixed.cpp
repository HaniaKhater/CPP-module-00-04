/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:06 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/28 04:53:39 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& ref ) : _raw_value(ref.getRawBits) {
    std::cout << "Copy constructor called" << std::endl;
}

	this->_raw_value =  ref.getRawBits();
Fixed::Fixed( const int nb ) : _raw_value() {
	std::cout << "Int constructor called" << std::endl;
	this->_raw_value == nb << _fractionalB;
}

Fixed::Fixed( const float nb ) {
	std::cout << "Float constructor called" << std::endl;
	this->_raw_value == nb << 
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}

Fixed   &Fixed::operator=( Fixed fixed ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_raw_value = fixed.getRawBits();
    return ( *this );
}

//Fixed	&Fixed::operator<<( Fixed fixed) {}
//not the correct return value


int     Fixed::getRawBits( void ) const {
    std::cout << __func__ << " member function called" << std::endl;
    return ( this->_raw_value );
}

void    Fixed::setRawBits( int nb ) {
    std::cout << __func__ << " member function called" << std::endl;
    this->_raw_value = nb;
}