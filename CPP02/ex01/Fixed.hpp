/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:04:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/28 10:57:27 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Fixed {
	private:
		int fpValue;
		static const int point;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const & src);

		Fixed & operator=(Fixed const &other);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<(std::ostream &out, const Fixed &obj);
