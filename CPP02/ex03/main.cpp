/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:22:33 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/29 13:28:25 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {

	Point a(1.0f, 2.0f);
	Point b(1.0f, 5.0f);
	Point c(5.0f, 5.0f);
	Point p(1.5f, 2.5f);
	Point p2(-1.2f, -5.5f);
	Point p3(1.0f, 2.8f);
	std::cout << "Point inside traingle: " << Point::bsp(a, b, c, p) << std::endl;
	std::cout << "Point outside traingle: " << Point::bsp(a, b, c, p2) << std::endl;
	std::cout << "Point inline: " << Point::bsp(a, b, c, p3) << std::endl;
	return 0;
}
