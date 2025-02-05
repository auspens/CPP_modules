/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:30:58 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 11:31:29 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	std::cout << "WrongCat default constructor" << std::endl;
};
WrongCat::WrongCat(const WrongCat & src){
	std::cout << "WrongCat copy constructor" << std::endl;
	this->type = src.type;
}
WrongCat& WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}
WrongCat:: ~WrongCat(){
	std::cout << "WrongCat destructor" << std::endl;
}
void WrongCat::makeSound()const{
	std::cout << "Muuuuuuuuuuuuuuuh" << std::endl;
}
