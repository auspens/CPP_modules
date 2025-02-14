/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:38:46 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/14 16:47:17 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){std::cout<<"AMateria default constructor"<<std::endl;};
AMateria::AMateria(std::string const&type_e): type(type_e){
	std::cout<<"AMateria type constructor"<<std::endl;
}
AMateria::AMateria(AMateria const &src): type(src.type){
	std::cout<<"AMateria copy constructor"<<std::endl;
}
AMateria::~AMateria(){std::cout << "AMateria destructor"<<std::endl;}
AMateria& AMateria::operator=(AMateria const &other){
	if (this != &other){
		this->type=other.type;
	}
	return (*this);
}
std::string const &AMateria::getType() const{ return(type);}

