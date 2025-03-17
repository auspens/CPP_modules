/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:02:38 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/17 13:55:01 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>

template <typename T>
class Array{
	private:
		int _size;
		T *_array;
	public:
		Array();
		Array(unsigned int size);
		Array(Array const &src);
		~Array();

		Array &operator=(Array const &other);
		T &operator[](int index);

		int size();
};

#include "Array.tpp"
