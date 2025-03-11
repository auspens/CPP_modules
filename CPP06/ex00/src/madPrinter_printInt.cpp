/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   madPrinter_printInt.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:11:02 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:14:40 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/madPrinter.hpp"

void madPrinter::printInt(float f){
	std::cout <<"int: ";
	if (std::isnan(f) || f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
}
void madPrinter::printInt(double d){
	std::cout <<"int: ";
	if (std::isnan(d) || d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
}
void madPrinter::printInt(char c){
	std::cout <<"int: " << static_cast<int>(c) << std::endl;
}
