/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:15:17 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/17 14:16:03 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array():_size(0), _array(new T[0]){}//default constructor

template <typename T>
Array<T>::Array(unsigned int size):_size(size), _array(new T[size]){} //parameterised constructor, intialises with array of size size

template <typename T>
Array<T>::Array(Array const &src):_size(src._size), _array(new T[src._size]){ //copy constructor
	for(unsigned int i = 0; i< _size; ++i)
		_array[i] = src._array[i];
}

template <typename T> //destructor
Array<T>::~Array(){delete[] _array;}

template <typename T>
Array<T> &Array <T>::operator=(Array const &other){ //assignment operator overload
	if(this != &other){
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for(int i = 0; i< _size; ++i)
			_array[i] = other._array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](int index){ //subscript operator overload, returns element at index or throws out_of_range exception
	if (index >= _size || index < 0)
		throw (std::out_of_range("Index is out of range"));
	return _array[index];
}

template <typename T> //size function, returns size of the array
int Array<T>::size(){return _size;}
