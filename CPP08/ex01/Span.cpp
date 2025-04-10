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


void Span::addNumber(int value){
	if (_set.size() == _size)
		throw SpanException("Container is full");
	_set.insert(value);
}

int Span::shortestSpan(){
	if(_set.size() < 2)
		throw SpanException
			("Less than two objects in the collection");
	int res = this->longestSpan();
	std::set<int>::iterator it1 = _set.begin();
	std::set<int>::iterator it2 = _set.begin();
	++it2;
	res = *it2 - *it1;
	for (; it2 != _set.end(); ++it2, ++it1)
		res=std::min(res, *it2 - *it1);
	return res;
}

int Span::longestSpan(){
	if(_set.size() < 2)
		throw SpanException
			("Less than two objects in the collection");
	return *_set.rbegin() - *_set.begin();
}

Span::Span(){}
Span::~Span(){}
Span::Span(Span const &src)
		: _set(src._set)
		, _size(src._size){}
Span &Span::operator=(Span const &other){
	if (this != &other){
		this->_set = other._set;
		this->_size = other._size;
	}
	return *this;
}
Span::Span(unsigned int size)
		:_set()
		, _size(size){}

Span::SpanException::SpanException(std::string error)throw()
					:_error(error){}
Span::SpanException::~SpanException() throw(){}
const char* Span::SpanException::what() const throw(){return _error.c_str();}
