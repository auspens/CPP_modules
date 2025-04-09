/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:40:25 by auspensk          #+#    #+#             */
/*   Updated: 2025/04/09 14:22:45 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}
RPN::RPN(RPN const &src): _expression(src._expression){}
RPN& RPN::operator=(const RPN &other){
	if (this != &other)
		this->_expression = other._expression;
	return *this;
}
RPN::~RPN(){}
void RPN::parse(std::string input){
	for (unsigned long i = 0; i<input.size(); ++i)
	{
		if (std::isdigit(input[i]) || input[i]=='+' || input[i]=='-'||input[i]=='/' || input[i] == '*')
			_expression.push(input[i]);
		else
			throw RPNException("Unrecognised input symbol: not a digit or symbol");
		++i;
		if(i < input.size() && input[i] != ' ')
			throw RPNException("Unrecognised input symbol: not a white space");
	}
}
int RPN::solve(){
	char sign = _expression.top();
	int result;
	if (std::isdigit(sign)){
		if (_expression.size()==1)
			return sign - '0';
		else{
			throw RPNException("Not a valid RPN expression");
		}
	}
	else{
		_expression.pop();
		result = evaluateExpr(sign);
	}
	if (_expression.empty())
		return result;
	else
		throw RPNException("Not a valid RPN expression: not all values popped");
}

int RPN::getNextDigit(){
	int result = _expression.top();
	_expression.pop();
	if (!std::isdigit(result))
		result = evaluateExpr(result);
	else
		result -= '0';
	return result;
}

int RPN::evaluateExpr(char sign){
	int left, right;
	right = getNextDigit();
	left = getNextDigit();
	if (sign == '+'){
		return (left + right);}
	if (sign == '-') {
		return (left - right);}
	if (sign == '*') {
		 return (left * right);}
	if (sign == '/'){
		if (right == 0)
			throw RPNException("Division by zero");
		return (left / right);}
	else throw RPNException("Failed to parse expresison");
}


RPN::RPNException::RPNException()throw(): _error("RPNException"){}
RPN::RPNException::RPNException(std::string error)throw():_error(error){}
RPN::RPNException::~RPNException()throw(){}
const char*RPN::RPNException:: what() const throw(){return _error.c_str();}
