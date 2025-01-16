/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:25:13 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/16 11:48:00 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};
HumanB& HumanB::operator=(HumanB const & other){
	name = other.name;
	weapon = other.weapon;
	return (*this);
}
HumanB::HumanB(std::string name): name(name), weapon(NULL){};
HumanB::~HumanB(){};
HumanB::HumanB(std::string name, Weapon *weapon): name(name), weapon(weapon){};

void HumanB::setWeapon(Weapon const &src_weapon){
	weapon = &src_weapon;
}

void HumanB::attack() const {
	if (weapon)
		std::cout << name << " attacks with " << weapon->getType() << std::endl;
	else
		std::cout << name << "attacks with fists" << std::endl;
}
