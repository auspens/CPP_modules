/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:58:56 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 17:07:19 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templateFunctions.hpp"
#include <iostream>

int main(){
	// int a = 5;
	// int b = 10;

	// swap(a,b);
	// std::cout << "INTS:\nBefore swap a=5, b=10, after swap a=" << a << ", b=" << b << std::endl;
	// std::cout << "Max:" << max<int>(a,b) << std::endl;
	// std::cout << "Min:" << min<int>(a,b) << std::endl;

	// long a1 = 5;
	// long b1 = 10;

	// swap(a1,b1);
	// std::cout << "\nLONGS:\nBefore swap a1=5, b1=10, after swap a1=" << a1 << ", b1=" << b1 << std::endl;
	// std::cout << "Max:" << max<long>(a1,b1) << std::endl;
	// std::cout << "Min:" << min<long>(a1,b1) << std::endl;

	// char a2 = 'A';
	// char b2 = 'Y';

	// swap(a2,b2);
	// std::cout << "\nCHARS:\nBefore swap a2=A, b2=Y, after swap a2=" << a2 << ", b2=" << b2 << std::endl;
	// std::cout << "Max:" << max<char>(a2,b2) << std::endl;
	// std::cout << "Min:" << min<char>(a2,b2) << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
