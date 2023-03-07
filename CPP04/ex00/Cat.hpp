/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:08 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:13:07 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class   Cat : public Animal {
    public:
        Cat( void );
        Cat( Cat &ref );
        ~Cat( void );
        Cat &operator=( const Cat &rhs );
        void    makeSound( void ) const;
};

#endif