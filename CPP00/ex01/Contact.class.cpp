#include "Contact.class.hpp"
#include <iostream>

Contact::Contact() {}
Contact::~Contact() {}

void        Contact::set_firstName( std::string firstName ) {
    this->_firstName = firstName;
}
void        Contact::set_lastName( std::string lastName ) {
    this->_lastName = lastName;
}
void        Contact::set_nickname( std::string nickname ) {
    this->_nickname = nickname;
}
void        Contact::set_number( std::string number ) {
    this->_number = number;
}
void        Contact::set_secret( std::string secret ) {
    this->_secret = secret;
}
std::string Contact::get_firstName( void ) const {
    return (this->_firstName);
}
std::string Contact::get_lastName( void ) const {
    return (this->_lastName);
}
std::string Contact::get_nickname( void ) const {
    return (this->_nickname);
}
std::string Contact::get_number( void ) const {
    return (this->_number);
}
std::string Contact::get_secret( void ) const {
    return (this->_secret);
}