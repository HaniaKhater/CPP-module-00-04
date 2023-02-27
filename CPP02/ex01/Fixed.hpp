/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:09 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/26 02:07:50 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int		_raw_value;
		static const int	_fractionalB = 8;
	public:
		Fixed( void );
		Fixed( const Fixed& ref );
		~Fixed();
		Fixed	&operator=( Fixed fixed );
		void	swap( Fixed &first, Fixed &second );
		int		getRawBits( void ) const;
		void	setRawBits( int nb );
};

#endif