/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:19 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 07:29:01 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    int nb = 8;

    Animal* animals[nb];
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "--------- Filling the Animal Array ---------" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
	for(int i = 0; i < nb; i++){
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "----------- Deleting Each Animal -----------" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
	for(int i = 0; i < nb; i++)
		delete animals[i];
    
    return 0;
}