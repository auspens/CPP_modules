/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:24:51 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/19 13:30:57 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (std::string name_e) : name(name_e){
	// std::cout<<"Character name constructor"<<std::endl;
	for (int i = 0; i < 4; ++i) {
        inv[i] = NULL;
    }
}

Character &Character::operator=(Character const &other){
	if (this != &other){
	for (int i = 0; i < 4; ++i){
		if (inv[i])
		{
			delete (inv[i]);
			inv[i] = NULL;
		}
		if (other.inv[i])
			inv[i] = other.inv[i]->clone();
	}
	name = other.name;
}
	return (*this);
}

Character::Character (Character const &src){
	// std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < 4; ++i){
		if (inv[i])
		{
			delete (inv[i]);
			inv[i] = NULL;
		}
		if (src.inv[i])
			inv[i] = src.inv[i]->clone();
	}
	name = src.name;
}
Character::~Character(){
	// std::cout << "Character destructor"<<std::endl;
	for (int i = 0; i < 4; ++i){
		if (inv[i])
		{
			AMateria::removeMateria(inv[i]->getIndex());
			inv[i] = NULL;
		}
	}
}

std::string const &Character::getName() const{return name;}

void Character::equip(AMateria* m){
	if (m->isEquipped()){
		std::cout<<"Someone has already picked up this Materia"<<std::endl;
		return ;
	}
	for(int i = 0; i < 4; ++i){
		if (!this->inv[i]){
			this->inv[i] = m;
			m->setEquipped();
			return ;
		}
	}
	std::cout<<"No space for new equipment"<<std::endl;
}

void Character::unequip(int idx){
	if (this->inv[idx]){
		this->inv[idx]->unsetEquipped();
		this->inv[idx] = NULL;
		return ;
	}
	std::cout<<"No equipment at this slot"<<std::endl;
}

void Character::use(int idx, ICharacter& target){
	if(this->inv[idx]){
		this->inv[idx]->use(target);
		return;
	}
	std::cout<<"No equipment at this slot"<<std::endl;
}
