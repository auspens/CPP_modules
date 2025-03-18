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

class Span{
	public:
		void add(int value);
		int shortestSpan();
		int longestSpan();
		Span(int N);
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
		~Span();
		std::multiset<int> _set;
		unsigned int _size;
};
