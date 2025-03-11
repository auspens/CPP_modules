/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversionException.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:27:15 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:24:31 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <string>

class conversionException : public std::exception{
	private:
	std::string _error;
	public:
	~conversionException() throw();
	conversionException(std::string error);
	const char* what()const throw();
};
