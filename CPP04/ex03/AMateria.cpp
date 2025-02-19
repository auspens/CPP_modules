/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:38:46 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/19 13:34:58 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria *AMateria::allmateria[100]={NULL};
AMateria::AMateria(): is_equipped(false){
	// std::cout<<"AMateria default constructor"<<std::endl;
	index = addMateria(this);
};
AMateria::AMateria(std::string const&type_e): is_equipped(false), type(type_e){
	// std::cout<<"AMateria type constructor"<<std::endl;
	index = addMateria(this);
}
AMateria::AMateria(AMateria const &src): type(src.type){
	// std::cout<<"AMateria copy constructor"<<std::endl;
	index = addMateria(this);
}
AMateria::~AMateria(){
	// std::cout << "AMateria destructor"<<std::endl;
	allmateria[index] = NULL;
}
AMateria& AMateria::operator=(AMateria const &other){
	// std::cout<<"Materia operator="<<std::endl;
	if (this->type != other.type)
		std::cout << "Cannot copy Materias of different types" << std::endl;
	// if (this != &other){
	// 	this->type=other.type;
	// }
	return (*this);
}
std::string const &AMateria::getType() const{ return(type);}
void AMateria::use(ICharacter& target){std::cout << "AMateria use on " << target.getName() << std::endl;};
void AMateria::setEquipped(){is_equipped = true;}
void AMateria::unsetEquipped(){is_equipped = false;}
bool AMateria::isEquipped(){return is_equipped;}
void AMateria::cleanMateria(){
	for (int i=0; i<100;i++){
		if (allmateria[i]){
			delete(allmateria[i]);
			allmateria[i]=NULL;
		}
	}
}
int AMateria::addMateria(AMateria *materia){
	for (int i=0; i<100;i++){
		if (!allmateria[i]){
			allmateria[i]=materia;
			return i;
		}
	}
	std::cout << "this AMateria instance is out of the array index and should be deleted manually" << std::endl;
	return 100;
}
void AMateria::removeMateria(int idx){
	if (idx >=0 && idx < 100){
		delete(allmateria[idx]);
		allmateria[idx] = NULL;
		return ;
	}
	std::cout << "Not a valid index" << std::endl;
}
int AMateria::getIndex()const{return index;}
