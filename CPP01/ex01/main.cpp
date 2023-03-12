/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hania <hania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:16:31 by hkhater           #+#    #+#             */
/*   Updated: 2023/03/12 00:43:47 by hania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(int ac, char **av) {
	Zombie*	first;
	int			N = 10;

	if (ac == 1)
		first = zombieHorde(N, "");
	else
		first = zombieHorde(N, av[1]);
	for (int i = 0; i < N; i++) {
		std::cout << "Zombie " << i + 1 << " -> ";
		first[i].announce();
	}
	delete [] first;
	return EXIT_SUCCESS;
}
