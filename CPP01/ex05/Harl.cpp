/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:46:12 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/24 03:50:00 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void    Harl::_debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::_info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::_warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level) {
	void (Harl::*functions[]) (void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	
	std::string	_levels[] = {
		"debug", 
		"info", 
		"warning", 
		"error"
	};


	for(int i = 0; i < 4; i++) {
		if (level == _levels[i]) {
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "I have nothing to say about " << level << ". Bring me the manager! " << std::endl;;
}
