/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:34:07 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/18 16:55:09 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void Span::add(int value){
	if (_set.size() == _size)
		throw SpanException("Container is full");
	_set.insert(value);
}
int Span::shortestSpan(){
	if(_set.size() < 2)
		throw SpanException("Less than two objects in the collection");
	int res = this->longestSpan();
	std::set<int>::iterator it = _set.begin();
	for (; it != _set.end(); ++it)
	{
		if ((*(it + 1) - *it) > longestSpan)
			longestSpan = *(it + 1) - *it;
	}

}
int Span::longestSpan(){
	if(_set.size() < 2)
		throw SpanException("Less than two objects in the collection");
	return *_set.end() - *_set.begin();}


Span::Span(){}
Span::~Span(){}
Span::Span(Span const &src): _set(src._set), _size(src._size){}
Span &Span::operator=(Span const &other){
	if (this != &other){
		this->_set = other._set;
		this->_size = other._size;
	}
	return *this;
}
Span::Span(int size):_set(std::set<int>()), _size(size){}


Span::ContainerFullException::ContainerFullException(std::string error)throw():_error(error){}
Span::ContainerFullException::~ContainerFullException() throw(){}
const char* Span::ContainerFullException::what() const throw(){return _error.c_str();}
