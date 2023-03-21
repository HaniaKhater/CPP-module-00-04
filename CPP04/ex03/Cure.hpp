/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:05:47 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 19:45:17 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        Cure( Cure &ref );
        Cure( std::string type);
        ~Cure( void );
        Cure    &operator=( Cure &rhs );
        AMateria *clone() const;
        void    use( ICharacter &target );
    private:
    
};

#endif