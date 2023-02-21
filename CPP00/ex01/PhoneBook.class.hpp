/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:52:46 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/21 02:52:52 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        void _print_table(void) const;
        void _display_info(int index) const;
};

#endif
