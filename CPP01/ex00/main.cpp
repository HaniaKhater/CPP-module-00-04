/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:16:31 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/12 00:40:53 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

int	main() {
	Zombie*	zombie;

	zombie = newZombie("");
	zombie->announce();
	delete zombie;
	randomChump("lolo");
	return 0;
}
