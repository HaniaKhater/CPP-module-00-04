#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon::Weapon weapon ) {
    Weapon::Weapon  first;
    
    first = weapon;
    setName( name );
}

HumanA::~HumanA( void ) {}

HumanA::void    setName( std::string name ) {
    this->_name = name;
}

HumanA::std::string getName( void ) {
    return ( this->_name );
}

HumanA::Weapon::weapon  getWeapon( void ) {
    return ( this->_weapon );
}

HumanA::void    attack( void ) {
    std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
