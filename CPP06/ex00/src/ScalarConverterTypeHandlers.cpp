/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterTypeHandlers.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:14:21 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 10:04:48 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

void ScalarConverter::handleChar(std::string const & str){
	char c = str[0];
	std::cout << "char: "<< c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::handleInt(std::string const &str){
	std::istringstream stream (str);
	int i;
	stream>>i;
	if (stream.fail())
		throw conversionException("Could not convert int literal");
	madPrinter printer;
	printer.printChar(i);
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void ScalarConverter::handleFloat(std::string const & str){
	madPrinter printer;
	float f;
	//check for infinity and NaN
	if (str == "inff")
		f = std::numeric_limits<float>::infinity();
	else if (str == "-inff")
		f = std::numeric_limits<float>::infinity() * -1;
	else if (str == "nanf")
		f=std::numeric_limits<float>::quiet_NaN();
	//parse value, check for errors
	else{
		std::istringstream stream(str.substr(0, str.length()-1));
		stream>>f;
		if (stream.fail()){
			throw conversionException("Could not convert float literal");
		}
	}
	//static cast and print values
	printer.printChar(f);
	printer.printInt(f);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::handleDouble(std::string const &str){
	madPrinter printer;
	double d;
	//check for infinity and NaN
	if (str == "inf")
		d = std::numeric_limits<double>::infinity();
	else if (str == "-inf")
		d = std::numeric_limits<double>::infinity() * -1;
	else if (str == "nan")
		d = std::numeric_limits<double>::quiet_NaN();
	//parse value, check for errors
	else{
		std::istringstream stream(str);
		stream>>d;
		if (stream.fail()){
			throw conversionException("Could not convert float literal");
		}
	}
	//static cast and print values
	printer.printChar(d);
	printer.printInt(d);
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

