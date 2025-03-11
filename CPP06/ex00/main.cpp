/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:01:06 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:33:01 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/ScalarConverter.hpp"

int main(int argc, char *argv[]){
	if (argc != 2){
		std::cout <<"One argument required" << std::endl;
		return 0;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
