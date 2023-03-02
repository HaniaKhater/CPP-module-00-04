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

Fixed::Fixed( void ) : _value(0) {}

Fixed::Fixed( const Fixed &ref ) {
    this->_value = ref.getRawBits();
}

Fixed::Fixed( const int nb ) {
	this->_value = nb << this->_fractionalB;
}

Fixed::Fixed( const float nb ) {
	this->_value = roundf(nb * (1 << this->_fractionalB)); 
}

Fixed::~Fixed( void ) {
}

Fixed   &Fixed::operator=( const Fixed fixed ) {
    this->_value = fixed.getRawBits();
    return ( *this );
}

bool	Fixed::operator==( const Fixed &second ) const {
    return (this->_value == second.getRawBits());
}

bool    Fixed::operator!=( const Fixed &second ) const {
    return (this->_value != second.getRawBits());
}

bool    Fixed::operator<( const Fixed &second ) const {
    return (this->_value < second.getRawBits());
}

bool    Fixed::operator>( const Fixed &second ) const {
    return (this->_value > second.getRawBits());
}

bool    Fixed::operator<=( const Fixed &second ) const {
    return (this->_value <= second.getRawBits());
}

bool    Fixed::operator>=( const Fixed &second ) const {
    return (this->_value >= second.getRawBits());
}

Fixed	Fixed::operator+( const Fixed &second ) const {
	Fixed	result;

	result.setRawBits(this->_value + second.getRawBits());
	return result;
}

Fixed	Fixed::operator-( const Fixed &second ) const {
	Fixed	result;

	result.setRawBits(this->_value + second.getRawBits());
	return result;
}

Fixed	Fixed::operator*( const Fixed &second ) const {
	Fixed	result;

    std::cout << *this << "*" << second << " = ";
	result.setRawBits(this->_value * second.getRawBits());
	std::cout << result << std::endl;
    
    return result;
}

Fixed	Fixed::operator/( const Fixed &second ) const {
	Fixed	result;

	result.setRawBits(this->_value / second.getRawBits());
	return result;
}

Fixed	Fixed::operator++( int ) {
	this->_value++;
	return *this;
}

Fixed	&Fixed::operator++( void ) {
	++this->_value;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	this->_value--;
	return *this;
}

Fixed	&Fixed::operator--( void ) {
	--this->_value;
	return *this;
}

int     Fixed::getRawBits( void ) const {
    return ( this->_value );
}

void    Fixed::setRawBits( int nb ) {
    this->_value = nb;
}

int		Fixed::toInt(void) const {
	return this->_value >> this->_fractionalB;
}

float		Fixed::toFloat(void) const {
	return (float)this->_value / (float)(1 << this->_fractionalB);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b ) {
	return (a <= b) ? a : b;
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b ) {
	return (a <= b) ? a : b;
}

Fixed	&Fixed::max( Fixed &a, Fixed &b ) {
	return (a >= b) ? a : b;
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b ) {
	return (a >= b) ? a : b;
}

std::ostream	&operator<<(std::ostream &output, const Fixed &toPrint) {
	output << toPrint.toFloat();
	return output;
}