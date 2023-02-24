/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:46:15 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/24 03:28:12 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Harl {
    public:
        Harl( void );
        ~Harl( void );
        void    complain( std::string level );
    
    private:
        void    _debug( void );
        void    _info( void );
        void    _error( void );
        void    _warning( void );
		int		_interpret( std::string level );
};
