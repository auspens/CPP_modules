/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:17:38 by auspensk          #+#    #+#             */
/*   Updated: 2025/04/09 14:19:04 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char *argv[]){
	if (argc != 2){
		std::cout << "Please enter argument" << std::endl;
		return 0;
	}
	RPN expr;
	try{
		expr.parse(argv[1]);
		std::cout << expr.solve()<<std::endl;
	}
	catch(std::exception &e){
		std::cout << "Error" << std::endl;
	}
}
