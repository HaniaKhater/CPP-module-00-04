/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:04:10 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 05:15:23 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
    public:
        WrongCat( void );
        WrongCat( WrongCat &ref );
        ~WrongCat( void );
        WrongCat &operator=( const WrongCat &rhs );
        void    makeSound( void ) const;
};

#endif