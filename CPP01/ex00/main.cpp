/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:16:31 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 05:16:34 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie*	zombie;

	zombie = newZombie("");
	zombie->announce();
	delete zombie;
	randomChump("lolo");
	return EXIT_SUCCESS;
}
