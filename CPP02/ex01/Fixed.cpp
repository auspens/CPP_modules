/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:54:28 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/28 12:31:02 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed(): fpValue(0){	std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int value): fpValue(value<<point){std::cout << "Int constructor called" << std::endl;};

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	fpValue = int(value * (float)(1 << point) + (value >= 0 ? 0.5 : -0.5));
};

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(Fixed const & other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpValue = other.getRawBits();
	return(*this);
}
Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;};

int Fixed::getRawBits( void ) const{
	return(fpValue);
}

void Fixed::setRawBits( int const raw ){
	fpValue = raw;
}

float Fixed::toFloat( void ) const{
	return ((float)fpValue / (float)(1 << point));
}

int Fixed::toInt( void ) const{
	return ((int)((float)fpValue) / (float)(1 << point));
}

std::ostream & operator<<(std::ostream &out, const Fixed &obj){
	out << obj.toFloat();
	return (out);
}
