/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:55:38 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 15:11:56 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas(){
	std::cout << "Brain default constructor" << std::endl;
};
Brain::Brain(const Brain & src) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
}
Brain& Brain::operator=(const Brain &other){
	std::cout << "Brain assignment operator" << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}
Brain:: ~Brain(){
	std::cout << "Brain destructor" << std::endl;
}

const std::string Brain::getIdea(unsigned int ind) const{
	if (ind < 100)
		return ideas[ind];
	std::cout << "No such index" << std::endl;
	return "";
}

void Brain::setIdea(std::string const & idea, unsigned int ind){
	if (ind < 100)
		ideas[ind] = idea;
	else
		std::cout << "No such index" << std::endl;
}
