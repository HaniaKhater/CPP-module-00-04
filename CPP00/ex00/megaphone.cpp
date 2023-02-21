/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:51:50 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 02:51:55 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av) {
    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (EXIT_SUCCESS);
    }
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j]; j++) {
            if (av[i][j] =='\\' && av[i][j + 1] == 'n') {
                std::cout << std::endl;
                j++;
            } else
                std::cout << (char)std::toupper( av[i][j] );
        }
    }
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}
