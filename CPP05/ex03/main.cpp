/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:14:47 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/28 15:37:28 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/Intern.hpp"

int main(){
	std::cout<<"TEST 1: create bureaucrat with grade 1, intern, all three forms, sign and execute s1, execute p1 (not signed), execute, sign, execute r1" << std::endl;
	Bureaucrat ben("Ben", 1);
	Intern intern;
	AForm *s1 = intern.makeForm("ShrubberyCreationForm","garden");
	AForm *p1 = intern.makeForm("PresidentialPardonForm","Bonny");
	AForm *r1 = intern.makeForm("RobotomyRequestForm","Leela");
	std::cout<<ben << '\n' << *s1 << '\n' << *p1 << '\n' << *r1 <<std::endl;
	ben.signForm(*s1);
	ben.executeForm(*s1);
	ben.executeForm(*p1);
	ben.executeForm(*r1);
	ben.signForm(*r1);
	ben.signForm(*r1);
	ben.executeForm(*r1);

	std::cout<<"\nTEST 2:create bureaucrat with grade 60 try to sign and execute all three forms" << std::endl;
	Bureaucrat bill("Bill", 60);
	AForm *s2 = intern.makeForm("ShrubberyCreationForm","garden");
	AForm *p2 = intern.makeForm("PresidentialPardonForm","Clyde");
	AForm *r2 = intern.makeForm("RobotomyRequestForm","Fry");
	bill.signForm(*s2);
	bill.executeForm(*s2);
	bill.executeForm(*p2);
	bill.executeForm(*r2);
	bill.signForm(*r2);
	bill.signForm(*r2);
	bill.executeForm(*r2);

	std::cout<<"\nTEST 3:try to create nonexsistent form" << std::endl;
	try{
		AForm *someform = intern.makeForm("A Form", "target");
		std::cout << "Form created: " << *someform <<std::endl;
		delete someform;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout<<"Going on our merry way" << std::endl;
	delete s1;
	delete s2;
	delete p1;
	delete p2;
	delete r1;
	delete r2;
}
