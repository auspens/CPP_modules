/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:31:57 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 15:41:55 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <exception>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat{
	private:
	const std::string _name;
	int _grade;

	public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &other);
	~Bureaucrat();
	std::string const &getName()const;
	int getGrade()const;

	void incrementGrade();
	void decrementGrade();
	void signForm(AForm &form)const;
	void executeForm(AForm const & form) const;

	public:
	class GradeTooLowException : public std::exception{
		private:
		std::string _error;
		public:
		GradeTooLowException()throw();
		~GradeTooLowException() throw();
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception{
		private:
		std::string _error;
		public:
		GradeTooHighException()throw();
		~GradeTooHighException() throw();
		const char* what() const throw();
	};
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bur);
