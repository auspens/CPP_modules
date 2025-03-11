/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversionException.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:31:35 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:11:26 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/conversionException.hpp"


conversionException::conversionException(std::string error): _error(error){};
conversionException::~conversionException()throw(){};
const char *conversionException::what() const throw () {return _error.c_str();};
