/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:31:57 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/26 13:32:56 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <exception>
#include <iostream>

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
