/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:09:50 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/20 17:09:25 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){
	Harl harl;
	switch (argc){
		case 1: harl.setFilter(argv[0]); break;
		case 2: harl.setFilter(argv[1]); break;
		default: std::cout << "program takes no more than one argument" << std::endl;
	}
}
