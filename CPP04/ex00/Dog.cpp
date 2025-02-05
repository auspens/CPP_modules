/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:15:10 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 11:15:53 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Dog default constructor" << std::endl;
};
Dog::Dog(const Dog & src){
	std::cout << "Dog copy constructor" << std::endl;
	this->type = src.type;
}
Dog& Dog::operator=(const Dog &other){
	std::cout << "Dog assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}
Dog:: ~Dog(){
	std::cout << "Dog destructor" << std::endl;
}
void Dog::makeSound()const{
	std::cout << "Woof!" << std::endl;
}
