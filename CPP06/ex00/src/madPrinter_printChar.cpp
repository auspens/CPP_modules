/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   madPrinter_printChar.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:48:04 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:56:46 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/madPrinter.hpp"


void madPrinter:: printChar(int i){
	std::cout <<"char: ";
	if (i < 0 || i > 255)
		std::cout << "impossible" << std::endl;
	else if (i < 32 || i > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
}
void madPrinter:: printChar(double d){
	std::cout <<"char: ";
	if (d < 0 || d > 255 || isnan(d))
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d >= 128)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
}
void madPrinter:: printChar(float f){
	std::cout <<"char: ";
	if (f < 0 || f > 255 || isnanf(f))
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
}

