/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:05:05 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 11:12:34 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
};
Cat::Cat(const Cat & src){
	std::cout << "Cat copy constructor" << std::endl;
	this->type = src.type;
}
Cat& Cat::operator=(const Cat &other){
	std::cout << "Cat assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}
Cat:: ~Cat(){
	std::cout << "Cat destructor" << std::endl;
}
void Cat::makeSound()const{
	std::cout << "Meeeeeeeeeeow" << std::endl;
}

