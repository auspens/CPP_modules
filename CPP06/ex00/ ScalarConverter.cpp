/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScalarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:13:10 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/28 17:53:15 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ScalarConverter.hpp"

ScalarConverter:: ScalarConverter(){}
ScalarConverter:: ScalarConverter( ScalarConverter const &src){}
ScalarConverter &ScalarConverter::operator=( ScalarConverter const &other){return *this;}
ScalarConverter::~ ScalarConverter(){}

void ScalarConverter::convert(std::string const &str){

}

ScalarConverter::type ScalarConverter::detectType(std::string const &str){
	if (str.length() == 1 && !isdigit(str[0]))
		return CHAR;
	
}
