/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:34:14 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/28 14:53:55 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Intern {

	public:
	AForm *makeForm(std::string const &type, std::string const &target)const;
	Intern();
	Intern(Intern const &src);
	Intern &operator=(Intern const &other);
	~Intern();

	class FormCreationFailedException : public std::exception{
		private:
		std::string error;
		public:
		const char*what()const throw();
		FormCreationFailedException();
		~FormCreationFailedException()throw();
	};

	private:
	std::string _forms[3];
	AForm *(*_formFactory[3])(std::string const &target);
};
