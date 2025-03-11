/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:08:53 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:52:46 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <sstream>
#include <limits>
#include <climits>
#include <cmath>
#include <iomanip> 
#include "conversionException.hpp"
#include "madPrinter.hpp"

class ScalarConverter{

	public:
	static void convert(std::string const &str);

	private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(ScalarConverter const &src);
	ScalarConverter &operator=(ScalarConverter const &other);
	enum type{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		UNDEFINED
	}type_e;

	type detectType(std::string const &str);
	void handleInt(std::string const &str);
	void handleFloat(std::string const &str);
	void handleDouble(std::string const &str);
	void handleChar(std::string const &str);

};
