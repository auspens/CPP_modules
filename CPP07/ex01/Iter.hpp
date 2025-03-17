/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:19:37 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/17 10:48:39 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T>
void iter(T arr[], int size, void (*func)(T)){
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}


//function to pass as a parameter

template <typename T>
void function(T t){
	std::cout << t << std::endl;
}
