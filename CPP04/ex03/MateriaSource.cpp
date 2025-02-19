/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:19:09 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/19 13:34:23 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	// std::cout << "MateriaSource default constructor"<<std::endl;
	for (int i = 0; i < 4; ++i){
		samples[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &src){
	// std::cout << "MateriaSource copy constructor"<<std::endl;
	for (int i = 0; i < 4; ++i){
		samples[i] = src.samples[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other){
	if (this != &other){
		for (int i = 0; i < 4; ++i){
			if (samples[i]){
				delete(samples[i]);
				samples[i] = NULL;
			}
			samples[i] = other.samples[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	// std::cout << "MateriaSource destructor"<<std::endl;
	for (int i = 0; i < 4; ++i){
		if (samples[i]){
			AMateria::removeMateria(samples[i]->getIndex());
			samples[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* sample){
	for (int i = 0; i < 4; ++i){
		if (!samples[i]){
			samples[i] =sample->clone();
			return ;
		}
	}
	std::cout << "No space left for new Materia samples" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; ++i){
		if (samples[i]->getType() == type)
			return samples[i]->clone();
	}
	std::cout << "No such type of Materia in MateriaSource" << std::endl;
	return NULL;
}
