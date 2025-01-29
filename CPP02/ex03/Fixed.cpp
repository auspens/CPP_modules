/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:54:28 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/29 11:50:34 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed(): fpValue(0){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): fpValue(value<<point){
	//std::cout << "Int constructor called" << std::endl;
	}

Fixed::Fixed(const float value){
//	std::cout << "Float constructor called" << std::endl;
	fpValue = int(value * (float)(1 << point) + (value >= 0 ? 0.5 : -0.5));
}

Fixed::Fixed(Fixed const & src){
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(Fixed const & other){
//	std::cout << "Copy assignment operator called" << std::endl;
	this->fpValue = other.getRawBits();
	return(*this);
}
Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

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
	return out;
}

//comparison operators
bool Fixed::operator>(Fixed const &other)const{
	return (this->fpValue > other.fpValue);
}
bool Fixed::operator<(Fixed const &other)const{
	return (this->fpValue < other.fpValue);
}
bool Fixed::operator==(Fixed const &other)const{
	return (this->fpValue == other.fpValue);
}
bool Fixed::operator!=(Fixed const &other)const{
	return (this->fpValue != other.fpValue);
}
bool Fixed::operator>=(Fixed const &other)const{
	return (this->fpValue >= other.fpValue);
}
bool Fixed::operator<=(Fixed const &other)const{
	return (this->fpValue <= other.fpValue);
}

//mathematical operators
Fixed Fixed::operator+(Fixed const &other)const{
	Fixed result;
	result.setRawBits(this->fpValue + other.fpValue);
	return result;
}

Fixed Fixed::operator-(Fixed const &other)const{
	Fixed result;
	result.setRawBits(this->fpValue - other.fpValue);
	return result;
}

Fixed Fixed::operator*(Fixed const &other)const{
	Fixed result;
	result.setRawBits((int)((long)(this->fpValue * other.fpValue) >> point));
	return result;
}

Fixed Fixed::operator/(Fixed const &other)const{
	Fixed result;
	result.setRawBits((int)((long)(this->fpValue << point) / other.fpValue));
	return result;
}

//iterators
Fixed& Fixed::operator++(){
	++fpValue;
	return *this;
}

Fixed& Fixed::operator--(){
	--fpValue;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp (*this);
	++fpValue;
	return temp;
}

Fixed Fixed::operator--(int){
	Fixed temp (*this);
	--fpValue;
	return temp;
}

//min and max overloaded functions
Fixed const & Fixed::min(Fixed const &obj_1, Fixed const &obj_2){
	return ((obj_1.fpValue < obj_2.fpValue) ? obj_1 : obj_2);
}

Fixed const & Fixed::max(Fixed const &obj_1, Fixed const &obj_2){
	return ((obj_1.fpValue > obj_2.fpValue) ? obj_1 : obj_2);
}

Fixed & Fixed::min(Fixed &obj_1, Fixed &obj_2){
	return ((obj_1.fpValue < obj_2.fpValue) ? obj_1 : obj_2);
}

Fixed & Fixed::max(Fixed &obj_1, Fixed &obj_2){
	return ((obj_1.fpValue > obj_2.fpValue) ? obj_1 : obj_2);
}
