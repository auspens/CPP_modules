/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:13:10 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:39:39 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter:: ScalarConverter(){}
ScalarConverter:: ScalarConverter( ScalarConverter const &src){(void) src;}
ScalarConverter &ScalarConverter::operator=( ScalarConverter const &other){(void)other; return *this;}
ScalarConverter::~ ScalarConverter(){}

void ScalarConverter::convert(std::string const &str){
	ScalarConverter converter;
	madPrinter printer;
	ScalarConverter::type lit_type = converter.detectType(str);
	switch (lit_type)
	{
	case UNDEFINED: std::cout << "Literal not recognised" << std::endl;break;
	case CHAR: converter.handleChar(str); break;
	case DOUBLE: try{
		converter.handleDouble(str);
	}
	catch (std::exception &e){
		std::cout <<e.what() << std::endl;
	} break;

	case FLOAT: try{
		converter.handleFloat(str);
	}
	catch (std::exception &e){
		std::cout <<e.what() << std::endl;
	} break;

	case INT: try{
		converter.handleInt(str);
	}
	catch (std::exception &e){
		std::cout <<e.what() << std::endl;
	}
	  break;
	default: std::cout << "Unrecognised variable type" << std::endl;
	}
}

ScalarConverter::type ScalarConverter::detectType(std::string const &str){
	if (str.length() == 1 && !isdigit(str[0])) //check for char
		return CHAR;
	if (str == "nan" || str == "inf" || str == "-inf")
		return DOUBLE;
	if (str[str.length() - 1] == 'f') //check for float, additional checks carried in parcing
		return FLOAT;
	unsigned int i = 0;
	bool dot_found = false;
	if (str[i] == '-') //skip the minus
		++i;
	if (!isdigit(str[i]) || !isdigit(str[str.length() - 1])) //first and last symbol can only be digit
		return UNDEFINED;
//check the rest of the number: if there's a dot, that's a double, if there's a second dot or other non-digit, it cannot be parced, otherwise it's an int
	for(;i < str.length(); ++i){
		if (!isdigit(str[i])){
			if (str[i] == '.' && !dot_found)
				dot_found = true;
			else
				return UNDEFINED;
		}
	}
	if (dot_found)
		return DOUBLE;
	else
		return INT;
}
