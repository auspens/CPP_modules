/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:48:05 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/18 14:41:37 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main(){

	typedef std::vector<int> vectori;
	typedef std::list<int> listi;
	typedef std::deque<int> dequei;

	vectori arr1;
	arr1.push_back(5);
	arr1.push_back(1),
	arr1.push_back(2);
	arr1.push_back(4);
	std::cout << "\nVector:" << std::endl;
	vectori::iterator it = easyfind<vectori>(arr1, 2);
	std::cout << "Value found: "<< *it << " index: " << std::distance(arr1.begin(), it) << std::endl;
	it = easyfind<vectori>(arr1, 90);
	if (it == arr1.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value found: "<< *it << " index: " << std::distance(arr1.begin(), it) << std::endl;

	listi list1;
	list1.push_back(13);
	list1.push_back(26);
	list1.push_back(48);
	list1.push_back(-2);
	listi::iterator it1 = easyfind<listi>(list1, 48);
	std::cout << "\nList:" << std::endl;
	std::cout << "Value found: "<< *it1 << " index: " << std::distance(list1.begin(), it1) << std::endl;
	it1 = easyfind<listi>(list1, 0);
	if (it1 == list1.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value found: "<< *it1 << " index: " << std::distance(list1.begin(), it1) << std::endl;

	dequei deque1;
	deque1.push_back(80);
	deque1.push_back(-8);
	deque1.push_back(56);
	dequei::iterator it2 = easyfind<dequei>(deque1, -8);
	std::cout << "\nDeque:" << std::endl;
	std::cout << "Value found: "<< *it2 << " index: " << std::distance(deque1.begin(), it2) << std::endl;
	it2 = easyfind<dequei>(deque1, 0);
	if (it2 == deque1.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value found: "<< *it2 << " index: " << std::distance(deque1.begin(), it2) << std::endl;
}
