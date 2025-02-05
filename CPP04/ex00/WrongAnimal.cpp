/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:28:41 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 11:29:23 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("some wrong animal"){
	std::cout << "WrongAnimal default constructor" << std::endl;
};
WrongAnimal::WrongAnimal(std::string type_e) : type(type_e){
	std::cout << "WrongAnimal type constructor" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal & src): type(src.type){
	std::cout << "WrongAnimal copy constructor" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}
WrongAnimal:: ~WrongAnimal(){
	std::cout << "WrongAnimal destructor" << std::endl;
}
void WrongAnimal::makeSound()const{
	std::cout << "Kuckuck" << std::endl;
}
const std::string& WrongAnimal::getType()const{return type;}
