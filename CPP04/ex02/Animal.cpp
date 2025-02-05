/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:53:36 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 11:25:53 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type ("some animal"){
	std::cout << "Animal default constructor" << std::endl;
};
Animal::Animal(std::string type_e) : type(type_e){
	std::cout << "Animal type constructor" << std::endl;
}
Animal::Animal(const Animal & src): type(src.type){
	std::cout << "Animal copy constructor" << std::endl;
}
Animal& Animal::operator=(const Animal &other){
	std::cout << "Animal assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}
Animal:: ~Animal(){
	std::cout << "Animal destructor" << std::endl;
}
void Animal::makeSound()const{
	std::cout << "Mumble mumble" << std::endl;
}
const std::string& Animal::getType()const{return type;}
