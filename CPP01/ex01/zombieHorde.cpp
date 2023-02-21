/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:58:04 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 08:58:31 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name ) {
	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].announce();
	return ( horde );
}