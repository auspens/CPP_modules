/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:43:42 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 15:55:08 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;
class AForm{

	public:
	AForm();
	AForm(std::string name, int grade_to_sign, int grade_to_exec, std::string target);
	AForm(AForm const &src);
	virtual ~AForm();
	AForm &operator=(AForm const &other);

	const std::string &getName()const;
	int getGradeToSign()const;
	int getGradeToExecute()const;
	bool isSigned()const;
	const std::string &getTarget()const;

	void execute(Bureaucrat const & executor) const;
	virtual void proceedExecution() const = 0;
	void beSigned(Bureaucrat const &bur);

	public:
	class GradeTooLowException : public std::exception{
		private:
		std::string error;
		public:
		const char*what()const throw();
		GradeTooLowException();
		~GradeTooLowException()throw();
	};
	class GradeTooHighException : public std::exception{
		private:
		std::string error;
		public:
		const char*what()const throw();
		GradeTooHighException();
		~GradeTooHighException()throw();
	};
	class FormExecutionException : public std::exception{
		private:
		std::string error;
		public:
		const char*what()const throw();
		FormExecutionException();
		FormExecutionException(std::string const &err);
		~FormExecutionException()throw();
	};

	protected:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
	const std::string _target;
};

std::ostream &operator << (std::ostream &os, AForm const &form);
