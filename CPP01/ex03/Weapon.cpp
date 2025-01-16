/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:03:15 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/16 11:21:50 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};
Weapon::Weapon(std::string type): type(type){};
Weapon::Weapon(Weapon const &src){
	*this = src;
};
Weapon& Weapon::operator=(Weapon const &other){
	type = other.type;
	return (*this);
}
Weapon::~Weapon(){};
std::string const & Weapon::getType(void) const{
	return(type);
}
void Weapon::setType(std::string srcType){
	type = srcType;
}
