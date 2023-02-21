/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:52:32 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 02:52:35 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <ios>

PhoneBook::PhoneBook() { this->_curr_index = 0; }

PhoneBook::~PhoneBook() {}

static bool  is_numeric(std::string s) {
    for (int i = 0; s[i]; i++) {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '+') return false;
	}
    return true;
}

static int  set_field( std::string &input, bool nb ) {
    while (1) {
        if (!getline(std::cin, input))
            return EXIT_FAILURE;
        if (input.empty())
            std::cout << "This field cannot be empty. Please enter the contact's information." << std::endl;
		else if (nb == true && is_numeric(input) == false) {
			std::cout << "Phone number needs to be numeric. Please try again." << std::endl;
			std::cout << "Enter the contact's phone number:   ";
		}
        else
            return EXIT_SUCCESS;
    }
}

int PhoneBook::set_contact() {
    Contact     tmp;
    std::string input;

    std::cout << "Enter the contact's first name:     ";
    if (set_field(input, 0)) return EXIT_FAILURE;
    tmp.set_firstName(input);
    std::cout << "Enter the contact's last name:      ";
    if (set_field(input, 0)) return EXIT_FAILURE;
    tmp.set_lastName(input);
    std::cout << "Enter the contact's nickname:       ";
    if (set_field(input, 0)) return EXIT_FAILURE;
    tmp.set_nickname(input);
    std::cout << "Enter the contact's phone number:   ";
    if (set_field(input, 1)) return EXIT_FAILURE;
    tmp.set_number(input);
    std::cout << "Enter the contact's darkest secret: ";
    if (set_field(input, 0)) return EXIT_FAILURE;
    tmp.set_secret(input);
    
    this->_contacts[this->_curr_index] = tmp;
    this->_curr_index = (this->_curr_index + 1) % 8;

    std::cout << "Contact " << tmp.get_firstName() << " " << tmp.get_lastName() << " has been successfully created!" << std::endl;
    return EXIT_SUCCESS;
}

static std::string truncate( std::string s ) {
    if (s.length() > 10) 
		return s.substr(0, 9) + ".";
    return (s);
}

void PhoneBook::_print_table( void ) const {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Index" << "|";
    std::cout << std::right << std::setw(10) << "First Name" << "|";
    std::cout << std::right << std::setw(10) << "Last Name" << "|";
    std::cout << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++) {
		if (_contacts[i].get_firstName().empty() == true) break;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i + 1 << "|";
    	std::cout << std::right << std::setw(10) << truncate(_contacts[i].get_firstName()) << "|";
    	std::cout << std::right << std::setw(10) << truncate(_contacts[i].get_lastName()) << "|";
    	std::cout << std::right << std::setw(10) << truncate(_contacts[i].get_nickname()) << "|" << std::endl;
    }
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::_display_info( int index ) const {
    std::cout << "----------------------------" << std::endl << "          CONTACT " << std::endl << "----------------------------" << std::endl;
    std::cout << "First Name:      " << this->_contacts[index].get_firstName() << std::endl;
    std::cout << "Last Name:       " << this->_contacts[index].get_lastName() << std::endl;
    std::cout << "Nickname:        " << this->_contacts[index].get_nickname() << std::endl;
    std::cout << "Number:          " << this->_contacts[index].get_number() << std::endl;
    std::cout << "Darkest Secret:  " << this->_contacts[index].get_secret() << std::endl;
}

int PhoneBook::get_contact( void ) const {
    std::string input;
    int         index;
    bool        empty;


    if (this->_contacts[0].get_firstName().empty()) {
        std::cout << "You have no contacts yet, please add contacts first." << std::endl;
        return true;
    }
	PhoneBook::_print_table();
    std::cout << "Enter the index of the contact you would like to view." << std::endl;
    while (true)
    {
        if (!getline(std::cin, input)) return EXIT_FAILURE;
        if (input.empty())
            std::cout << "An index is needed to display the contact information, please try again." << std::endl;
        else {
            index = input[0] - 49;
            if (input[1] || index < 0 || index > 7 || this->_contacts[index].get_firstName().empty())
                std::cout << input << " is an invalid index, please try again." << std::endl;
            else
                break;
        }
    }
    PhoneBook::_display_info(index);
    return EXIT_SUCCESS;
}
