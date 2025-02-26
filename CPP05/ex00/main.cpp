/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:14:47 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 13:38:36 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	std::cout<<"TEST 1: create bureaucrat with grade 1, check assignment operator, increment the grade" << std::endl;
	try{
		Bureaucrat swen("Swen", 1);
		std::cout << swen << std::endl;
		Bureaucrat john("John", 11);
		std::cout << john << std::endl;
		john=swen;
		std::cout << john << std::endl;
		john.incrementGrade();
	}
	catch(std::exception &e){
		std::cout<<"Exception caught: " << e.what() << std::endl;
	}

	std::cout<<"\nTEST 2: create bureaucrat with grade -1" << std::endl;
	try{
		Bureaucrat ivan("Ivan", -1);
		std::cout << ivan << std::endl;
	}
	catch(std::exception &e){
		std::cout<<"Exception caught: " << e.what() << std::endl;
	}

	std::cout<<"\nTEST 3: create bureaucrat with grade 151" << std::endl;
	try{
		Bureaucrat ben("Ben", 151);
		std::cout << ben << std::endl;
	}
	catch(std::exception &e){
		std::cout<<"Exception caught: " << e.what() << std::endl;
	}

	std::cout<<"\nTEST 4: create bureaucrat with grade 148, check copy constructor, increment the grade 3 times" << std::endl;
	try{
		Bureaucrat ben("Ben", 148);
		Bureaucrat ben2(ben);
		std::cout << ben2 << std::endl;
		for (int i = 0; i<3; ++i){
			ben2.decrementGrade();
			std::cout << ben2 << std::endl;
		}
	}
	catch(std::exception &e){
		std::cout<<"Exception caught: " << e.what() << std::endl;
	}
}
