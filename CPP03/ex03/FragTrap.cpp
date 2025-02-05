/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:22:21 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 10:39:13 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){}
FragTrap::FragTrap(std::string name) :ClapTrap(name){
	std::cout << "FragTrap name constructor" << std::endl;
	hit_points = 100;
	attack_damage = 30;
	energy_points = 100;
}
FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
	std::cout << "FragTrap copy constructor" << std::endl;
}
FragTrap::~FragTrap(){std::cout << "FragTrap destructor" << std::endl;}
FragTrap& FragTrap::operator=(FragTrap const & other){
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}
void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << name << ": high fives guys!" << std::endl;
}

void FragTrap::attack(const std::string& target){
	switch (energy_points)
	{
	case 0:
		std::cout << "FragTrap " << name << " no energy left for attack" << std::endl;
		break;
	default:
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;
		break;
	}
}

