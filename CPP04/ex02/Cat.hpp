/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:08 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:36:49 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public AAnimal {
    public:
        Cat( void );
        Cat( Cat &ref );
        ~Cat( void );
        Cat &operator=( const Cat &rhs );
        void    makeSound( void ) const;
    private:
        Brain   *_brain;
};

#endif