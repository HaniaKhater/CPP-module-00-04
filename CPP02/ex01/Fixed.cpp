/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:06 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/26 02:08:03 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& ref ) {
    this->_raw_value =  ref.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}

Fixed   &Fixed::operator=( Fixed fixed ) {
    std::cout << "Copy assignment operator called" << std::endl;
    //std::swap(*this, fixed);
    return ( *this );
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_raw_value );
}

void    Fixed::setRawBits( int nb ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_raw_value = nb;
}