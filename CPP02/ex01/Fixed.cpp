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

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &ref ) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = ref.getRawBits();
}

Fixed::Fixed( const int nb ) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = nb << this->_fractionalB;
}

Fixed::Fixed( const float nb ) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nb * (1 << this->_fractionalB)); 
}

Fixed::~Fixed( void ) {
    std::cout << "Default destructor called" << std::endl;
}

Fixed   &Fixed::operator=( const Fixed fixed ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = fixed.getRawBits();
    return ( *this );
}

int     Fixed::getRawBits( void ) const {
    std::cout << __func__ << " member function called" << std::endl;
    return ( this->_value );
}

void    Fixed::setRawBits( int nb ) {
    std::cout << __func__ << " member function called" << std::endl;
    this->_value = nb;
}

int		Fixed::toInt(void) const {
	return this->_value >> this->_fractionalB;
}

float		Fixed::toFloat(void) const {
	return (float)this->_value / (float)(1 << this->_fractionalB);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &toPrint) {
	output << toPrint.toFloat();
	return output;
}