/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:45:39 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/23 09:45:40 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class   HumanB {
    private:
        Weapon			*_weapon;
        std::string     _name;
    
    public:
        HumanB( std::string name );
        ~HumanB( void );
		void				setName( std::string );
		const std::string	getName( void ) const ;
		void				setWeapon(Weapon &weapon);
//		const Weapon		getWeapon( void ) const ;
        void				attack( void ) const ;
};

#endif