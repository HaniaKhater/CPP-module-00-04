/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:46:12 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/24 04:39:07 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void    Harl::_debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::_info( void ) {
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::_warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int		Harl::_interpret( std::string level ) {
	std::string	_levels[] = {
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (level == _levels[i])
			return (i + 1);
	return (0);
}

void	Harl::complain( std::string level ) {
	switch( _interpret(level) ) {
		case (1) : 
			_debug();
		case (2) :
			_info();
		case (3) :
			_warning();
		case (4) :
			_error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	exit (0);
}
