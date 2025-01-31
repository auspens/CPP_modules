/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:15:35 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 13:49:24 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){};
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap name constructor" << std::endl;
	attack_damage = 20;
	hit_points = 100;
	energy_points = 50;
}
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
	std::cout << "ScavTrap copy constructor" << std::endl;
}
ScavTrap::~ScavTrap(){std::cout << "ScavTrap destructor" << std::endl;}
ScavTrap& ScavTrap::operator=(ScavTrap const & other) {
std::cout << "ScavTrap assignment operator" << std::endl;
	if(this != &other){
		ClapTrap::operator=(other);
	}
	return *this;
}

void ScavTrap::attack(const std::string& target){
	switch (energy_points)
	{
	case 0:
		std::cout << "ScavTrap " << name << " no energy left for attack" << std::endl;
		break;
	default:
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;
		break;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode" << std::endl;
}
