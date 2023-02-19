#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

class   PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        int set_contact();
        int get_contact() const;

    private:
        Contact _contacts[8];
        int     _curr_index;
        bool _print_table(void) const;
        void _display_info(int index) const;
};

#endif