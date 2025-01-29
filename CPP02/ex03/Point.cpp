/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:06:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/29 11:49:39 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){
	//std::cout << "Point default constructor called" << std::endl;
}
Point::Point(float x, float y): x(Fixed(x)), y(Fixed(y)){
	//std::cout << "Point constructor with floats called" << std::endl;
	}
Point::Point(Fixed x, Fixed y): x(Fixed(x)), y(Fixed(y)){
	//std::cout << "Point constructor with fixed called" << std::endl;
}
Point::Point(Point const & src): x(src.x), y(src.y){}
Point& Point::operator=(Point const & other){
	if (this != &other)
		std::cout << "Assignment is not possible for const members\n" << std::endl;
	return (*this);
}
Point::~Point(){}
