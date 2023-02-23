#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class   HumanB {
    private:
        Weapon			*_weapon;
        std::string     _name;
    
    public:
        HumanB( std::string name );
        ~HumanB( void );
		void				setName( std::string );
		const std::string	getName( void ) const ;
		void				setWeapon(Weapon &weapon);
//		const Weapon		getWeapon( void ) const ;
        void				attack( void ) const ;
};

#endif