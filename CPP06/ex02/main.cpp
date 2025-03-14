/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:57:21 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 13:08:26 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Generator.hpp"
#include "includes/Identifier.hpp"

int main(){
	for(int i = 0; i < 5; ++i){
		std::cout << "\nTEST " << i << std::endl;
		Base *p = Generator::generate();
		Identifier::identify(p);
		Identifier::identify(*p);
		delete p;
	}
}
