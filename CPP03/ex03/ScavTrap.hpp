/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 02:36:18 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/06 06:00:27 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
	private:
		
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap &ref );
		~ScavTrap( void );
		ScavTrap& operator=(const ScavTrap & rhs);
		void	guardGate( void ) const;
		void	attack( const std::string& target);
};

#endif