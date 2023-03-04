/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:24:16 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/04 02:39:07 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	private:
		std::string	_name;
		int			_hitPts = 10;
		int			_energyPts = 10;
		int			_attackDmg = 0;
	public:
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		int		getHitPts( void ) const;
		void	setHitPts( int );
		std::string	getName( void );
		void	setName( void );
		int		getEnergyPts( void ) const;
		void	setEnergyPts( int );
		int		getAttackDmg( void ) const;
		void	setAttackDamage( int );
}

#endif