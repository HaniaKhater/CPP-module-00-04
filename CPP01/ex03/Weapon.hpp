/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:45:52 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/23 09:45:53 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class   Weapon {
    private:
        std::string _type;
    public:
        Weapon( std::string type );
        ~Weapon( void );
        const std::string	&getType( void ) const;
        void        setType( std::string type );
};

#endif