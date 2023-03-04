/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:12 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/04 02:09:37 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	const std::string red("\033[0;31m");
	const std::string reset("\033[0m");
	Fixed		a(20);
	Fixed const	b( Fixed(5.05f) * Fixed( 2 ) );
	Fixed		c(0.5f);

	std::cout << std::endl << red << "----------------------------------------------" << reset << std::endl; 
	std::cout << red << "---------------- FIXED POINTS ----------------" << reset << std::endl;
	std::cout << red << "----------------------------------------------" << reset << std::endl;
	std::cout << "a = " << a << std::endl << "b = " << b << std::endl << "c = " << c << std::endl;
	
	std::cout << std::endl << red << "----------------------------------------------" << reset << std::endl; 
	std::cout << red << "------------ COMPARISON OPERATORS ------------" << reset << std::endl;
	std::cout << red << "----------------------------------------------" << reset << std::endl;
	if (a < c)
		std::cout << "a is smaller than c" << std::endl;
	if (a <= c)
		std::cout << "a is smaller or equal to c" << std::endl;
	if (a > c)
		std::cout << "a is bigger than c" << std::endl;
	if (a >= c)
		std::cout << "a is bigger or equal to c" << std::endl;
	if (a == c)
		std::cout << "a is equal to c" << std::endl;
	if (a != c)
		std::cout << "a is not equal to c" << std::endl;
	
	std::cout << std::endl << red << "----------------------------------------------" << reset << std::endl; 
	std::cout << red << "------------ ARITHMETIC OPERATORS ------------" << reset << std::endl;
	std::cout << red << "----------------------------------------------" << reset << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / c = " << a / c << std::endl;
	std::cout << "a + b + c = " << a + b +c << std::endl;
	
	std::cout << std::endl << red << "----------------------------------------------" << reset << std::endl; 
	std::cout << red << "------ INCREMENT / DECREMENT OPERATORS -------" << reset << std::endl;
	std::cout << red << "----------------------------------------------" << reset << std::endl;
	std::cout << "a ----> " << a << std::endl;	
	std::cout << "++a --> " << ++a << std::endl;
	std::cout << "a ----> " << a << std::endl;	
	std::cout << "--a --> " << --a << std::endl;
	std::cout << "a ----> " << a << std::endl;	
	std::cout << "a++ --> " << a++ << std::endl;
	std::cout << "a ----> " << a << std::endl;	
	std::cout << "a-- --> " << a-- << std::endl;
	std::cout << "a ----> " << a << std::endl;	

	std::cout << std::endl << red << "----------------------------------------------" << reset << std::endl; 
	std::cout << red << "------------- MIN / MAX FUNCTIONS ------------" << reset << std::endl;
	std::cout << red << "----------------------------------------------" << reset << std::endl;
	std::cout << "Max --> " << Fixed::max( a, c ) << std::endl;
	std::cout << "Max --> " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min --> " << Fixed::min( a, c ) << std::endl;
	std::cout << "Min --> " << Fixed::min( a, b ) << std::endl << std::endl;
	return 0;
}