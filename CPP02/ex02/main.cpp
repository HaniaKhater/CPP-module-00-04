/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:12 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/28 04:36:56 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed		a(1);
	Fixed const	b( Fixed(5.05f) * Fixed( 2 ) );
	Fixed		c( Fixed(5.05f) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;	
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}