/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:13:00 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/17 14:16:56 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(){
	std::cout << "Test from the module: int * a = new int(), a = ";
	int * a = new int();
	std::cout << a << ", value at a = " << *a << std::endl;
	delete a;

	std::cout<<"\nTEST1"<< std::endl;
	Array <int>arr1;
	std:: cout << "Array size = " << arr1.size()<<std::endl;
	try {
		std::cout << arr1[0] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what()<<std::endl;
	}

	std::cout<<"\nTEST2"<< std::endl;
	Array <std::string> arr2(4);
	std:: cout << "Array size = " << arr2.size()<<std::endl;
	arr2[0] = "hello";
	arr2[2] = "hi";
	for (int i = -1; i < 4; ++i){
		try
		{
			std::cout << arr2[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout<<"\nTEST3"<< std::endl;
	Array <int> arr3(5);
	std::cout << "Array size = " << arr3.size()<<std::endl;
	for (int i = -1; i < 5; ++i){
		try
		{
			arr3[i] = i;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	for (int i = -1; i < 4; ++i){
		try
		{
			std::cout << arr3[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout<<"\nTEST4"<< std::endl;
	arr1 = arr3;
	for (int i = 0; i < 5; ++i){
		std::cout<<"array1: " << arr1[i]<< ", array2: " <<arr3[i] <<std::endl;
		arr1[i]+=5;
		std::cout<<"Increased arra1 value by 5. array1: " << arr1[i]<< ", array2: " <<arr3[i] <<std::endl;
	}
}
