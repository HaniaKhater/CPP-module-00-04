/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 06:43:13 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:54:49 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    public:
        Brain( void );
        Brain( Brain &ref);
        ~Brain( void );
        Brain   &operator=( Brain &rhs );
    private:
        std::string ideas[100];
};

#endif