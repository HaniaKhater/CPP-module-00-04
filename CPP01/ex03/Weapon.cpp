#include "Weapon.hpp"

Weapon::Weapon() {} //maybe add type as a param
Weapon::~Weapon() {}

std::string getType( void ) {
    return (this->_type);
}

void        setType( std::string type) {
    this->_type = type;
}
