/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:54:28 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/22 10:58:17 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed(){
	std::cout<<"Default constructor called"<<std::endl;
	fpValue = 0 << point;
}

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
	std::cout << "getRawBits member function called" << std::endl;
	return(fpValue);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	fpValue = raw;
}
