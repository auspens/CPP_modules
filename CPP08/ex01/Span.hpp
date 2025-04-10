/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:10:19 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/18 16:43:38 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <set>
#include <exception>
#include <string>
#include <iterator>
#include <algorithm>

class Span{
	public:
		void addNumber(int value);
		template <typename InputIterator>
			void addRange(const InputIterator start, 
							const InputIterator end){
								if (_set.size() + std::distance(start, end) > _size)
									throw SpanException("Range exceeds container capacity");
								_set.insert(start, end);
							}
		int shortestSpan();
		int longestSpan();
		Span(unsigned int N);
		~Span();
		Span(Span const &src);
		Span &operator=(Span const &other);

		class SpanException : public std::exception{
			private:
				std::string _error;
				SpanException()throw();
			public:
				SpanException(std::string error)throw();
				~SpanException() throw();
				const char* what() const throw();
		};
	private:
		Span();
		std::multiset<int> _set;
		unsigned int _size;
};
