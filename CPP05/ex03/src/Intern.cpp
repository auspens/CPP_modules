/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:04:27 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/28 15:36:50 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"

Intern::Intern(){
	_forms[0]="ShrubberyCreationForm";
	_forms[1]="RobotomyRequestForm";
	_forms[2]="PresidentialPardonForm";
	_formFactory[0]=&ShrubberyCreationForm::makeForm;
	_formFactory[1]=&RobotomyRequestForm::makeForm;
	_formFactory[2]=&PresidentialPardonForm::makeForm;
}
Intern::Intern(Intern const &src){
	_forms[0]=src._forms[0];
	_forms[1]=src._forms[1];
	_forms[2]=src._forms[2];
	_formFactory[0]=src._formFactory[0];
	_formFactory[1]=src._formFactory[1];
	_formFactory[2]=src._formFactory[2];
}
Intern &Intern::operator=(Intern const &other){
	if (this != &other){
	_forms[0]=other._forms[0];
	_forms[1]=other._forms[1];
	_forms[2]=other._forms[2];
	_formFactory[0]=other._formFactory[0];
	_formFactory[1]=other._formFactory[1];
	_formFactory[2]=other._formFactory[2];
	}
	return *this;
}
Intern::~Intern(){}

Intern::FormCreationFailedException::FormCreationFailedException():error("Intern: could not create form"){}
Intern::FormCreationFailedException::~FormCreationFailedException()throw(){}
const char *Intern::FormCreationFailedException::what()const throw(){return error.c_str();}

AForm *Intern::makeForm(std::string const &type, std::string const &target)const{
	for(int i = 0; i < 3; ++i)
	{
		if(_forms[i]==type){
			std::cout << "Intern creates " << type << std::endl;
			return (_formFactory[i](target));
		}
	}
	throw FormCreationFailedException();
}
