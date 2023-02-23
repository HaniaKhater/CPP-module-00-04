/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:17:00 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 05:17:20 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {
	Zombie*	created = new Zombie();

	if (name.empty())
		created->setName(createName());
	else
		created->setName(name);
	return (created);
}
