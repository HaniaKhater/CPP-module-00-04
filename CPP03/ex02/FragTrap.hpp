/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 04:19:07 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 06:03:38 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
	private:
		
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap &ref );
		~FragTrap( void );
		FragTrap   &operator=( const FragTrap & rhs );
		void	attack( const std::string& target);
		void	highFivesGuys( void );
};

#endif