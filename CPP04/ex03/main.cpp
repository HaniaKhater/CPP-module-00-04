/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 07:43:36 by hania             #+#    #+#             */
/*   Updated: 2023/03/21 20:18:25 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


# define RESET			"\x1b[0m"
# define RED			"\x1b[31m"

int main(int ac, char **argv)
{
	(void)argv;
	if (ac != 1) {
		std::cout << "Too many arguments" << std::endl;
		return (1);
	}
	std::cout << RED << "---------- TEST 1 ----------" << RESET << std::endl;

	IMateriaSource*	ms = new MateriaSource();
	ms->learnMateria(new Ice());
	ms->learnMateria(new Cure());
	ICharacter*	paul = new Character("Paul");
	AMateria*	tmp;
	tmp = ms->createMateria("ice");
	paul->equip(tmp);
	tmp = ms->createMateria("cure");
	paul->equip(tmp);
	ICharacter* bob = new Character("Bob");
	paul->use(0, *bob);
	paul->use(1, *bob);
    
	delete bob;
	delete paul;
	delete ms;
	std::cout << std::endl << std::endl;
	{
	    std::cout << RED << "---------- TEST 1 ----------" << RESET << std::endl;
    
	    IMateriaSource*	src = new MateriaSource();
	    src->learnMateria(new Ice());
	    src->learnMateria(new Cure());
	    src->learnMateria(new Cure());
	    src->learnMateria(new Ice());
	    ICharacter*	dog = new Character("dog");
	    AMateria*	tmp;
	    tmp = src->createMateria("cure");
	    dog->equip(tmp);
	    tmp = src->createMateria("cure");
	    dog->equip(tmp);
	    tmp = src->createMateria("ice");
	    dog->equip(tmp);
	    tmp = src->createMateria("cure");
	    dog->equip(tmp);
	    tmp = src->createMateria("cure");
	    dog->equip(tmp);
	    delete tmp;
	    ICharacter*	cat = new Character("cat");
	    dog->use(0, *cat);
	    dog->use(1, *cat);
	    dog->use(2, *cat);
	    dog->use(3, *cat);
	    dog->use(4, *cat); 
        
	    delete cat;
	    delete dog;
	    delete src;
    }
	return (0);
}
