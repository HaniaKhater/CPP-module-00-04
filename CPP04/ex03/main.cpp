/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 07:43:36 by hania             #+#    #+#             */
/*   Updated: 2023/03/10 01:02:57 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    delete bob;
    delete me;
    delete src;

    return 0;
}
/*

int main()
{
    // Create a Materia
    AMateria* iceMateria = new Ice();

    // Test the getType function
    std::cout << "Ice Materia type: " << iceMateria->getType() << std::endl;

    // Test the clone function
    AMateria* iceMateriaClone = iceMateria->clone();
    std::cout << "Clone of Ice Materia type: " << iceMateriaClone->getType() << std::endl;

    // Create a Character
    ICharacter* character = new Character("Alice");

    // Test the equip function
    character->equip(iceMateria);

    // Test the use function
    ICharacter* target = new Character("Bob");
    character->use(0, *target);

    // Test the unequip function
    character->unequip(0);

    // Test copying a Character object
    Character* alice2 = new Character(*static_cast<Character*>(character));
    std::cout << "Copy of Alice's name: " << alice2->getName() << std::endl;

    // Clean up memory
    delete iceMateria;
    delete iceMateriaClone;
    delete character;
    delete target;
    delete alice2;

    return 0;
}
*/
