/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:22:27 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 15:41:49 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):AForm("ShrubberyCreationForm", 145, 137, target){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):AForm(src._name, src._gradeToSign, src._gradeToExecute, src._target){}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
	if (this != &other)
		std::cout<<"Forms cannot be copied" << std::endl;
	return *this;
}
void ShrubberyCreationForm::proceedExecution()const{
	std::string fileName = _target + "_shrubbery";
 	std::ofstream newTree(fileName.c_str());
	newTree<<"some ASCII tree"<<std::endl;
	newTree.close();
}
AForm *ShrubberyCreationForm::makeForm(std::string const &target) {return new ShrubberyCreationForm(target);}
