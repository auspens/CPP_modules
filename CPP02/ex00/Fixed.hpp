/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:04:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/22 10:57:10 by auspensk         ###   ########.fr       */
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
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const &other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
