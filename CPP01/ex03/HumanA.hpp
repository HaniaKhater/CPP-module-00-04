/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:45:31 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/23 09:45:32 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class   HumanA {
    private:
        Weapon			&_weapon;
        std::string     _name;
    
    public:
        HumanA( std::string name, Weapon &first );
        ~HumanA( void );
		void		setName( std::string );
		std::string	getName( void ) const ;
        void		attack( void ) const;
};

#endif