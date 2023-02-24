/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 06:46:43 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/24 04:03:22 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon bat = Weapon("baseball bat");
		HumanA marine("Marine", bat);
		marine.attack();
		bat.setType("nunchucks");
		marine.attack();
	}
	{
		Weapon bat = Weapon("baseball bat");
		HumanB paul("Paul");
		paul.attack();
		paul.setWeapon(bat);
		bat.setType("nunchucks");
		paul.attack();
	}
	return 0;
}