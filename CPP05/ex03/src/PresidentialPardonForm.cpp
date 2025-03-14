/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:13:05 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 15:41:46 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target):AForm("PresidentialPardonForm", 25, 5, target){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):AForm(src._name, src._gradeToSign, src._gradeToExecute, src._target){}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	if (this != &other)
		std::cout<<"Forms cannot be copied" << std::endl;
	return *this;
}
void PresidentialPardonForm::proceedExecution()const{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
AForm *PresidentialPardonForm ::makeForm(std::string const &target) {return new PresidentialPardonForm(target);}
