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

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():_name(""), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){}
AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec)
		: _name(name), _isSigned(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_exec){
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

const std::string &AForm::getName()const{return _name;}
int AForm::getGradeToSign()const{return _gradeToSign;}
int AForm::getGradeToExecute()const{return _gradeToExecute;}
bool AForm::isSigned()const{return _isSigned;}

void AForm::beSigned(Bureaucrat const &bur){
	if (_gradeToSign < bur.getGrade())
		throw GradeTooLowException();
	if (_isSigned){
		std::cout<<"A is already signed"<<std::endl;
		return ;
	}
	_isSigned = true;
}

AForm::GradeTooHighException::GradeTooHighException():error("A: grade is too high"){}
AForm::GradeTooHighException::~GradeTooHighException()throw(){}
const char *AForm::GradeTooHighException::what()const throw(){return error.c_str();}

AForm::GradeTooLowException::GradeTooLowException():error("A: grade is too low"){}
AForm::GradeTooLowException::~GradeTooLowException()throw(){}
const char *AForm::GradeTooLowException::what()const throw(){return error.c_str();}

std::ostream &operator << (std::ostream &os, AForm const &form){
	os<<form.getName() << " grade to sign: " << form.getGradeToSign() << " grade to execute " << form.getGradeToExecute() << " is signed: " << form.isSigned() << std::endl;
	return os;
}
