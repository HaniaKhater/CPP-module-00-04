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

int	main(int ac, char **av) {
	Zombie*	first;
	int			N = 10;

	if (ac == 1)
		first = zombieHorde(N, "");
	else
		first = zombieHorde(N, av[1]);
	for (int i = 1; i < N; i++) {
		std::cout << "Zombie " << i << " -> ";
		first[i].announce();
	}
	delete [] first;
	return EXIT_SUCCESS;
}
