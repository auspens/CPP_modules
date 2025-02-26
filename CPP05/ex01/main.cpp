/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:14:47 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 15:25:28 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	std::cout<<"TEST 1: create bureaucrat with grade 12, create form f1 with grade to sign 15 and form f2 with grade to sign 10" << std::endl;
	Bureaucrat ben("Ben", 12);
	Form f1("f1", 15, 55);
	Form f2("f2", 10, 100);
	ben.signForm(f1);
	ben.signForm(f2);

	std::cout<<"TEST 2:create form f3 with grade to sign 155 and form f4 with grade to execute 0" << std::endl;
	try{
		// Form f3("f3", 155, 55);
		Form f4("f4", 10, 0);
		// ben.signForm(f3);
		ben.signForm(f4);
	}
	catch(std::exception &e){
		std::cout<< "Exception catched: " << e.what()<<std::endl;
	}

}
