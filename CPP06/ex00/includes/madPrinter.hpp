/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   madPrinter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:02:34 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 15:56:04 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <climits>
#include <limits>
#include <cmath>

class madPrinter{
	public:
	madPrinter();
	madPrinter(madPrinter const &src);
	~madPrinter();
	madPrinter &operator=(madPrinter const &other);
	void printChar(int i);
	void printChar(float f);
	void printChar(double d);
	void printInt(char c);
	void printInt(float f);
	void printInt(double d);
};
