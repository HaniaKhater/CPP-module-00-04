/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:19 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:06:03 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    
    delete j; // should not create a leak
    delete i;
    
    return 0;
}