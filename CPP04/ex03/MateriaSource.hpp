/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:13:24 by hania             #+#    #+#             */
/*   Updated: 2023/03/08 03:22:47 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria*   _inventory[4];
        int         _count;
    public:
        MateriaSource( void );
        MateriaSource( MateriaSource &ref );
        virtual ~MateriaSource( void );
        MateriaSource   &operator=( MateriaSource &rhs );
        virtual void learnMateria( AMateria* m );
        virtual AMateria* createMateria( std::string const &type );
};

#endif