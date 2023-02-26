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

class Fixed
{
	private:
		int		_value;
		static const int	_fractionalB = 8;
	public:
		Fixed( void );
		Fixed( Fixed& ref );
		~Fixed();
};

Fixed::Fixed( void ) {}

Fixed::Fixed( Fixed& ref ) {
}

Fixed::~Fixed() {}
