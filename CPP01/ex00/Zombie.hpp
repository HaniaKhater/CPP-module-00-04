/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:28:04 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/12 00:42:32 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

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
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
