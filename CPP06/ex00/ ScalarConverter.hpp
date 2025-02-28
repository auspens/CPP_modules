/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:08:53 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/28 17:52:40 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cctype>

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
		DOUBLE
	}type_e;
	type detectType(std::string const &str);
	int parseInt(std::string const &str);
	float parseFloat(std::string const &str);
	double parseDouble(std::string const &str);
};
