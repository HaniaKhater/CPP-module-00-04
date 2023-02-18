#include "PhoneBook.class.hpp"
#include <ios>

PhoneBook::PhoneBook() { this->_curr_index = 0; }

PhoneBook::~PhoneBook() {}

static bool  is_numeric(std::string s) {
    for (int i = 0; s[i], i++;)
        if (!isdigit(s[i])) return false;
    return true;
}

static int  set_feild(std::string &input) {
    while (1) {
        if (!getline(std::cin, input))
            return EXIT_FAILURE;
        if (input.empty())
            std::cout << "This feild cannot be empty. Please enter the contact's information." << std::endl;
        else
            return EXIT_SUCCESS;
    }
}

int PhoneBook::set_contact() {
    Contact     tmp;
    std::string input;

    std::cout << "Enter the contact's first name:" << std::endl;
    if (set_feild(input)) return EXIT_FAILURE;
    tmp.set_firstName(input);
    std::cout << "Enter the contact's last name:" << std::endl;
    if (set_feild(input)) return EXIT_FAILURE;
    tmp.set_lastName(input);
    std::cout << "Enter the contact's nickname:" << std::endl;
    if (set_feild(input)) return EXIT_FAILURE;
    tmp.set_nickname(input);
    std::cout << "Enter the contact's phone number:" << std::endl;
    if (set_feild(input)) return EXIT_FAILURE;
    tmp.set_number(input);
    std::cout << "Enter the contact's darkest secret:" << std::endl;
    if (set_feild(input)) return EXIT_FAILURE;
    tmp.set_secret(input);
    return EXIT_SUCCESS;
}

static std::string truncate(std::string s) {
    if (s.length() > 10) return s.substr(0, 9) + ".";
    return (s);
}

//add the std::right before setw
static void print_row(Contact contact, int index) {
    if (index == 0) {
        std::cout << std::right << std::setw(10) << "Index" << "|";
        std::cout << std::right << std::setw(10) << "First Name" << "|";
        std::cout << std::right << std::setw(10) << "Last Name" << "|";
        std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
    }
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << truncate(contact.get_firstName()) << "|";
    std::cout << std::setw(10) << truncate(contact.get_lastName()) << "|";
    std::cout << std::setw(10) << truncate(contact.get_nickname()) << "|";
    std::cout << std::setw(10) << truncate(contact.get_number()) << std::endl;
}

void _print_table( void ) const {
    if (this->_contacts[0].get_firstName.empty()) {
        std::cout << "You have no contacts yet, please add contacts first." << std::endl;
        return ;
    }
    for (int i = 0; i < 8, i++;) {
        if (!this->_contacts[i].get_firstName().empty())
            print_row(this->_contacts[i], i);
    }
    return ;
}

void _display_info(int index) const {
    std::cout << "-------------------------" << std::endl << "      CONTACT " << std::endl << "-------------------------" << std::endl;
    std::cout << "First Name: " << this->_contacts[index].get_firstName() << std::endl;
    std::cout << "Last Name: " << this->_contacts[index].get_lastName() << std::endl;
    std::cout << "Nickname: " << this->_contacts[index].get_nickname() << std::endl;
    std::cout << "Number: " << this->_contacts[index].get_number() << std::endl;
    std::cout << "Darkest Secret: " << this->_contacts[index].get_secret() << std::endl;
}

int     get_contact( void ) const {
    str::string input;
    int         index;

    _print_table();
    std::cout << "Enter the index of the contact you would like to view." << std::endl;
    while (true)
    {
        if (!getline(std::cin, input)) return EXIT_FAILURE;
        if (input.empty())
            std::cout << "An index is needed to display the contact information, please try again." << std::endl;
        else {
            index = input[0] - 48;
            if (intput[1] || index < 0 || index > 7 || this->_contacts[index].get_firstName().empty())
                std::cout << input << " is an invalid index, please try again." << std::endl;
            else
                break;
        }
    }
    _display_info(index);
    return EXIT_SUCCESS;
}