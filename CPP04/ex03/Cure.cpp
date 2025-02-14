/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:13:57 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/14 17:26:06 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){std::cout << "Cure default constructor" << std::endl;}
Cure::Cure(Cure const &src):AMateria(src.type){std::cout << "Cure copy constructor" << std::endl;}
Cure::~Cure(){std::cout << "Cure defstructor" << std::endl;}
Cure &Cure::operator=(Cure const &other){
	if (this != &other){
		this->type=other.type;
	}
	return (*this);
}

Cure *Cure::clone()const{
	return new Cure();
}
