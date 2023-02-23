/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:28:04 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 05:28:07 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class	Zombie {
	public:
		Zombie();
		~Zombie();
		void		setName( std::string );
		std::string	getName( void ) const ;
		void		announce( void );

	private:
		std::string		_name;
};

std::string	createName( void );
Zombie*		zombieHorde( int N, std::string name );

#endif
