/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:02:23 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/29 11:35:12 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
	static int Orientation(Point const & a, Point const & b, Point const & c);

public:
	Point();
	Point (float x, float y);
	Point(Fixed x, Fixed y);
	Point(Point const & src);
	Point & operator=(Point const & other);
	~Point();

	static bool bsp( Point const a, Point const b, Point const c, Point const point);
};



