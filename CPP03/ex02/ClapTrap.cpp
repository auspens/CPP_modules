/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:48:54 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 16:09:00 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){std::cout << "ClapTrap default constructor" << std::endl;};
ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10),
									attack_damage(0){std::cout << "ClapTrap name constructor" << std::endl;}
ClapTrap::ClapTrap(ClapTrap const &src): name(src.name), hit_points(src.hit_points),
										energy_points(src.energy_points), attack_damage(src.attack_damage){
std::cout << "ClapTrap copy constructor" << std::endl;
}
ClapTrap::ClapTrap(std::string name_e, unsigned int hp, unsigned int ep, unsigned int ad)
					: name(name_e), hit_points(hp), energy_points(ep), attack_damage(ad){
						std::cout << "ClapTrap all values constructor" << std::endl;
					}
ClapTrap & ClapTrap::operator=(ClapTrap const & other){
	std::cout << "ClapTrap assignment operator" << std::endl;
	if(this != &other){
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return *this;
}
ClapTrap::~ClapTrap(){std::cout << "ClapTrap destructor" << std::endl;};

void ClapTrap::attack(const std::string& target){
	switch (energy_points)
	{
	case 0:
		std::cout << "ClapTrap " << name << " no energy left for attack" << std::endl;
		break;
	default:
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;
		break;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	switch (hit_points)
	{
	case 0:
		std::cout << "ClapTrap " << name << " no hit points left for damage" << std::endl;
		break;
	default:
		int delta = ((amount > hit_points) ? hit_points : amount);
		std::cout << "ClapTrap " << name << " is attacked, losing " << delta << " hit points" << std::endl;
		hit_points -= delta;
		break;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	switch (energy_points)
	{
	case 0:
		std::cout << "ClapTrap " << name << " no energy left for regeneration" << std::endl;
		break;
	default:
		int delta = ((amount > energy_points) ? energy_points : amount);
		std::cout << "ClapTrap " << name << " regenerates by " << delta << " hit points" << std::endl;
		hit_points += delta;
		energy_points -= delta;
		break;
	}
}

void ClapTrap::printValues(){
	std::cout << "ClapTrap named " << name << " Energy points " << energy_points
			<< " Attack damage " << attack_damage << " Hit points " << hit_points << std::endl;
}

