/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:09:33 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 15:22:54 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():_name(""), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){}
Form::Form(std::string name, int grade_to_sign, int grade_to_exec)
		: _name(name), _isSigned(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_exec){
			if (_gradeToExecute > 150 || _gradeToSign > 150)
				throw GradeTooLowException();
			if (_gradeToExecute <1 || _gradeToSign < 1)
				throw GradeTooHighException();
		}
Form::Form(Form const &src)
		: _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){}
Form::~Form(){}
Form &Form::operator=(Form const &other){
	if (this != &other)
		std::cout<<"Forms cannot be copied" << std::endl;
	return *this;
}

const std::string &Form::getName()const{return _name;}
int Form::getGradeToSign()const{return _gradeToSign;}
int Form::getGradeToExecute()const{return _gradeToExecute;}
bool Form::isSigned()const{return _isSigned;}

void Form::beSigned(Bureaucrat const &bur){
	if (_gradeToSign < bur.getGrade())
		throw GradeTooLowException();
	if (_isSigned){
		std::cout<<"Form is already signed"<<std::endl;
		return ;
	}
	_isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException():error("Form: grade is too high"){}
Form::GradeTooHighException::~GradeTooHighException()throw(){}
const char *Form::GradeTooHighException::what()const throw(){return error.c_str();}

Form::GradeTooLowException::GradeTooLowException():error("Form: grade is too low"){}
Form::GradeTooLowException::~GradeTooLowException()throw(){}
const char *Form::GradeTooLowException::what()const throw(){return error.c_str();}

std::ostream &operator << (std::ostream &os, Form const &form){
	os<<form.getName() << " grade to sign: " << form.getGradeToSign() << " grade to execute " << form.getGradeToExecute() << " is signed: " << form.isSigned() << std::endl;
	return os;
}
