/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:17:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/04/09 14:29:58 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <string>
#include <iostream>
#include <cctype>
#include <exception>

class RPN{
	public:
		RPN();
		RPN(RPN const &src);
		RPN &operator=(const RPN &other);
		~RPN();

		void parse(std::string input);
		int solve();

		class RPNException : public std::exception{
			private:
				std::string _error;
			public:
				RPNException()throw();
				RPNException(std::string error)throw();
				~RPNException()throw();
				const char* what() const throw();
		};
	private:
		std::stack <char>_expression;
		int evaluateExpr(char sign);
		int getNextDigit();
};
