#include "Weapon.hpp"
#include <ios>

Weapon::Weapon(std::string type) : _type(type) {} //maybe add type as a param
Weapon::~Weapon() {}

const std::string		&Weapon::getType( void ) const {
    return (this->_type);
}

void        	Weapon::setType( std::string type) {
    this->_type = type;
}
