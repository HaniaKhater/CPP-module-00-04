#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class   HumanA {
    private:
        Weapon			&_weapon;
        std::string     _name;
    
    public:
        HumanA( std::string name, Weapon &first );
        ~HumanA( void );
		void		setName( std::string );
		std::string	getName( void ) const ;
        void		attack( void ) const;
};

#endif