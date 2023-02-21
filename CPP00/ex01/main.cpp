/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:53:09 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 02:53:12 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int main(void) {
    PhoneBook   phonebook;
    std::string input;

    std::cout << "----------------------------------------------" << std::endl;
	std::cout << "              PhoneBook" << std::endl << "----------------------------------------------" << std::endl;
    std::cout << "You can use ADD to add a contact, SEARCH to find one, and EXIT to leave" << std::endl;
    while (std::cout << "\033[1;31m-> \033[0m"&& std::getline(std::cin, input)) {
        if (input == "ADD" || input == "add")
            phonebook.set_contact();
        else if (input == "SEARCH" || input == "search")
            phonebook.get_contact();
        else if (input == "EXIT" || input == "exit")
            break;
        else
            std::cout << input << " is not a valid command. Please try ADD, SEARCH, or EXIT" << std::endl;
    }
}
