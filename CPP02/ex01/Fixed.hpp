/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 07:07:09 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/28 04:37:29 by hkhater          ###   ########.fr       */
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
		Fixed( const int nb );
		Fixed( const float nb );
		~Fixed();
		Fixed	&operator=( Fixed fixed );
		int		getRawBits( void ) const;
		void	setRawBits( int nb );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

#endif