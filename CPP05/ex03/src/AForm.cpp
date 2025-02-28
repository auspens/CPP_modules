/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:09:33 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 15:56:24 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

//constructors, destructors, factory
AForm::AForm():_name(""), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){}
AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec, std::string target)
		: _name(name), _isSigned(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_exec), _target(target){
			if (_gradeToExecute > 150 || _gradeToSign > 150)
				throw GradeTooLowException();
			if (_gradeToExecute <1 || _gradeToSign < 1)
				throw GradeTooHighException();
		}
AForm::AForm(AForm const &src)
		: _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){}
AForm::~AForm(){}
AForm &AForm::operator=(AForm const &other){
	if (this != &other)
		std::cout<<"Forms cannot be copied" << std::endl;
	return *this;
}

//getters
const std::string &AForm::getName()const{return _name;}
int AForm::getGradeToSign()const{return _gradeToSign;}
int AForm::getGradeToExecute()const{return _gradeToExecute;}
bool AForm::isSigned()const{return _isSigned;}
const std::string &AForm::getTarget()const{return _target;}

//signing and executing the forms
void AForm::beSigned(Bureaucrat const &bur){
	if (_gradeToSign < bur.getGrade())
		throw GradeTooLowException();
	if (_isSigned){
		std::cout<<"AForm is already signed"<<std::endl;
		return ;
	}
	_isSigned = true;
}
void AForm::execute(Bureaucrat const & executor) const{
	if(!_isSigned)
		throw FormExecutionException(_name + " could not be executed: form not signed");
	if (executor.getGrade() > _gradeToExecute)
		throw FormExecutionException(_name + " could not be executed: grade too low");
	proceedExecution();
}

//exceptions
AForm::GradeTooHighException::GradeTooHighException():error("AForm: grade is too high"){}
AForm::GradeTooHighException::~GradeTooHighException()throw(){}
const char *AForm::GradeTooHighException::what()const throw(){return error.c_str();}

AForm::GradeTooLowException::GradeTooLowException():error("AForm: grade is too low"){}
AForm::GradeTooLowException::~GradeTooLowException()throw(){}
const char *AForm::GradeTooLowException::what()const throw(){return error.c_str();}

AForm::FormExecutionException::FormExecutionException():error("AForm: form execution exception"){}
AForm::FormExecutionException::FormExecutionException(std::string const &err):error(err){}
AForm::FormExecutionException::~FormExecutionException()throw(){}
const char *AForm::FormExecutionException::what()const throw(){return error.c_str();}

//<< operator overload
std::ostream &operator << (std::ostream &os, AForm const &form){
	os<<form.getName() << " grade to sign: " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExecute()
	<<", target: " << form.getTarget() << ", is signed: " << form.isSigned();
	return os;
}

