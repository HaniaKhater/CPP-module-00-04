#include <string>

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

class   Contact {
    public:
        Contact();
        ~Contact();
        void            set_firstName( std::string firstName );
        void            set_lastName( std::string lastName );
        void            set_nickname( std::string nickname );
        void            set_number( std::string number );
        void            set_secret( std::string secret );
        std::string     get_firstName( void ) const;
        std::string     get_lastName( void ) const;
        std::string     get_nickname( void ) const;
        std::string     get_number( void ) const;
        std::string     get_secret( void ) const;

    private:
        std::string     _firstName;
        std::string     _lastName;
        std::string     _nickname;
        std::string     _number;
        std::string     _secret;
};

#endif