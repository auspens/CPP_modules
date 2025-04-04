/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:04:37 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 15:44:05 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(std::string const &target):AForm("RobotomyRequestForm", 72, 45, target){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):AForm(src._name, src._gradeToSign, src._gradeToExecute, src._target){}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
	if (this != &other)
		std::cout<<"Forms cannot be copied" << std::endl;
	return *this;
}
void RobotomyRequestForm::proceedExecution()const{
	std::cout << "Some drilling noises" << std::endl;
	int i = rand();
	if (i%2 == 0)
		std::cout << _target << " has been successfully robotomised" << std::endl;
	else
		std::cout << _target << ": robotomy failed" << std::endl;
	}
AForm * RobotomyRequestForm::makeForm(std::string const &target) {return new RobotomyRequestForm(target);}
