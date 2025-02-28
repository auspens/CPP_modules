/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:14:47 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/28 15:42:38 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"

int main(){
	std::cout<<"TEST 1: create bureaucrat with grade 1, all three forms, sign and execute s1, execute p1 (not signed), execute, sign, execute r1" << std::endl;
	Bureaucrat ben("Ben", 1);
	ShrubberyCreationForm s1("garden");
	PresidentialPardonForm p1("Bonny");
	RobotomyRequestForm r1("Leela");
	std::cout<<ben << '\n' << s1 << '\n' << p1 << '\n' << r1 <<std::endl;
	ben.signForm(s1);
	ben.executeForm(s1);
	ben.executeForm(p1);
	ben.executeForm(r1);
	ben.signForm(r1);
	ben.signForm(r1);
	ben.executeForm(r1);

	std::cout<<"\nTEST 2:create bureaucrat with grade 150 try to sign and execute all three forms" << std::endl;
	Bureaucrat bill("Bill", 150);
	ShrubberyCreationForm s2("garden");
	PresidentialPardonForm p2("Clyde");
	RobotomyRequestForm r2("Fry");
	std::cout<<bill << '\n' << s2 << '\n' << p2 << '\n' << r2 <<std::endl;
	bill.signForm(s2);
	bill.executeForm(s2);
	bill.signForm(p2);
	bill.executeForm(p2);
	bill.signForm(r2);
	bill.executeForm(r2);

	std::cout<<"\nTEST 3:create bureaucrat with grade 60, try to sign and execute all three forms" << std::endl;
	Bureaucrat bob("Bob", 60);
	ShrubberyCreationForm s3("forest");
	PresidentialPardonForm p3("Hotzenplotz");
	RobotomyRequestForm r3("Zoidberg");
	std::cout<<bob << '\n' << s3 << '\n' << p3 << '\n' << r3 <<std::endl;
	bob.signForm(s3);
	bob.executeForm(s3);
	bob.signForm(p3);
	bob.executeForm(p3);
	bob.signForm(r3);
	bob.executeForm(r3);

	std::cout<<"TEST 3:create bureaucrat with grade 12, try to sign and execute all three forms" << std::endl;
	Bureaucrat bart("Bart", 60);
	ShrubberyCreationForm s4("sea");
	PresidentialPardonForm p4("John Silver");
	RobotomyRequestForm r4("Amy");
	std::cout<<bob << '\n' << s4 << '\n' << p4 << '\n' << r4 <<std::endl;
	bob.signForm(s4);
	bob.executeForm(s4);
	bob.signForm(p4);
	bob.executeForm(p4);
	bob.signForm(r4);
	bob.executeForm(r4);
}
