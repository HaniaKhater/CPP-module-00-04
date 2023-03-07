/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:01 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:36:17 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   AAnimal {
    public:
        AAnimal( void );
        AAnimal( AAnimal &ref );
        virtual ~AAnimal( void );
        AAnimal      &operator=( AAnimal &rhs );
        const std::string getType( void ) const;
        virtual void    makeSound( void ) const = 0;
    protected:
        std::string _type;
};

#endif