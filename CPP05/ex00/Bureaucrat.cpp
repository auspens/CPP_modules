/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:52:56 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 13:39:09 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150){}
Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade){
	if (grade > 150)
		throw GradeTooHighException();
	if (grade < 1)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(Bureaucrat const &src):_name(src._name), _grade(src._grade){}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other){
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bur){
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return os;
}
Bureaucrat::~Bureaucrat(){}

std::string const & Bureaucrat::getName()const{return _name;}
int Bureaucrat::getGrade()const{return _grade;}

void Bureaucrat::decrementGrade(){
	if (_grade == 150)
		throw GradeTooLowException();
	++_grade;
}
void Bureaucrat::incrementGrade(){
	if (_grade == 1)
		throw GradeTooHighException();
	--_grade;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()throw(): _error("Grade is too low!"){}
Bureaucrat::GradeTooLowException::~GradeTooLowException()throw(){}
const char * Bureaucrat::GradeTooLowException:: what() const throw(){return _error.c_str();}

Bureaucrat::GradeTooHighException::GradeTooHighException()throw(): _error("Grade is too high!"){}
Bureaucrat::GradeTooHighException::~GradeTooHighException()throw(){}
const char * Bureaucrat::GradeTooHighException:: what() const throw(){return _error.c_str();}
