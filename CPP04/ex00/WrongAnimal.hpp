/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:04:05 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:28:26 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class   WrongAnimal {
    public:
        WrongAnimal( void );
        WrongAnimal( WrongAnimal &ref );
        virtual ~WrongAnimal( void );
        WrongAnimal      &operator=( WrongAnimal &rhs );
        const std::string getType( void ) const;
        void    makeSound( void ) const;
    protected:
        std::string _type;
};

#endif