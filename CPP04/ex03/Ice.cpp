/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:56:27 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/19 13:34:01 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
	// std::cout << "Ice default constructor" << std::endl;
	}
Ice::Ice(Ice const &src):AMateria(src.type){
	// std::cout << "Ice copy constructor" << std::endl;
	}
Ice::~Ice(){
	// std::cout << "Ice defstructor" << std::endl;
	}
Ice &Ice::operator=(Ice const &other){
	if (this != &other){
		this->type=other.type;
	}
	return (*this);
}

Ice *Ice::clone()const{
	return new Ice();
}

void Ice::use(ICharacter& target){
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<< std::endl;
}
