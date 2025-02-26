/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:43:42 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 15:16:29 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;
class Form{

	public:
	Form();
	Form(std::string name, int grade_to_sign, int grade_to_exec);
	Form(Form const &src);
	~Form();
	Form &operator=(Form const &other);

	const std::string &getName()const;
	int getGradeToSign()const;
	int getGradeToExecute()const;
	bool isSigned()const;

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

	private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
};

std::ostream &operator << (std::ostream &os, Form const &form);
