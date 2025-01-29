/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:41:37 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/29 13:34:37 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int Point::Orientation(Point const &  a, Point const &  b, Point const & c){
	Point ab ((b.x - a.x), (b.y - a.y));
	Point ac ((c.x - a.x), (c.y - a.y));
	Fixed cross_product = ab.x * ac.y - ab.y * ac.x;
	if (cross_product.toFloat() > 0)
		return 1;
	if (cross_product.toFloat() < 0)
		return -1;
	return 0;
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point){
	int result = Orientation(a, b, point) + Orientation(b, c, point) + Orientation(c, a, point);
	if (result == 3  || result == -3)
		return true;
	return false;
}
