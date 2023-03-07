/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:19 by hania             #+#    #+#             */
/*   Updated: 2023/03/07 06:20:41 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"


int main()
{   
    const Animal    *meta = new Animal();
    const Animal    *j = new Dog();
    const Animal    *i = new Cat();
    const WrongAnimal   *prin = new WrongAnimal(); 
    const WrongAnimal    *a = new WrongDog();
    const WrongAnimal    *b = new WrongCat();

    std::cout << std::endl << "----------- CORRECT ANIMALS -----------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl << "------------ WRONG ANIMALS ------------" << std::endl;
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    b->makeSound(); // will output the cat sound!
    a->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    delete meta;
    delete i;
    delete j;
    delete prin;
    delete a;
    delete b;

    return 0;
}
