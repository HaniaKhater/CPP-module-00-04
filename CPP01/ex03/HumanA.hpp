#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class   HumanA {
    private:
        Weapon::Weapon  _weapon;
        std::string     _name;
    
    public:
        HumanA( void );
        ~HumanA( void );
        attack( void );
}

#endif