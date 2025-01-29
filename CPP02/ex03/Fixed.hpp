/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:04:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/28 14:29:37 by auspensk         ###   ########.fr       */
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

		bool operator>(Fixed const &other)const;
		bool operator<(Fixed const &other)const;
		bool operator==(Fixed const &other)const;
		bool operator!=(Fixed const &other)const;
		bool operator>=(Fixed const &other)const;
		bool operator<=(Fixed const &other)const;

		Fixed operator+(Fixed const &other)const;
		Fixed operator-(Fixed const &other)const;
		Fixed operator*(Fixed const &other)const;
		Fixed operator/(Fixed const &other)const;

		Fixed& operator++();
		Fixed operator ++(int);
		Fixed& operator--();
		Fixed operator --(int);

		static Fixed const & min(Fixed const &obj_1, Fixed const &obj_2);
		static Fixed& min(Fixed  &obj_1, Fixed  &obj_2);
		static Fixed const & max(Fixed const &obj_1, Fixed const &obj_2);
		static Fixed& max(Fixed  &obj_1, Fixed  &obj_2);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<(std::ostream &out, const Fixed &obj);
