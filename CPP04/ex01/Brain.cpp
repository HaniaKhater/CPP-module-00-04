/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 06:43:09 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:55:22 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain &ref ) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = ref;
}

Brain::~Brain( void ) {
    std::cout << "Brain destructor called" << std::endl;
}

Brain  &Brain::operator=( Brain &rhs ) {
    std::cout << "Brain assignation operator called" << std::endl;
    *this->ideas = *rhs.ideas;
    return( *this );
}
