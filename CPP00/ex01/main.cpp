#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int main(void) {
    PhoneBook   phonebook;
    std::string input;

    std::cout << "              PhoneBook" << std::endl << "---------------------------" << std::endl;
    std::cout << "You can use ADD to add a contact, SEARCH to find one, and EXIT to leave" << std::endl;
    while (std::getline(std::cin, input)) {
        if (input =="ADD") {
            phonebook.set_contact();
        }
        else if (input == "SEARCH") {
            phonebook.get_contact();
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << input << " is not a valid command. Please try ADD, SEARCH, or EXIT" << std::endl;
    }
}