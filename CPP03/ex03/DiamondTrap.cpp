/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:25:27 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 17:35:45 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(){std::cout << "DiamondTrap default constructor" << std::endl;};
DiamondTrap::DiamondTrap(std::string name_e) : ClapTrap(name_e + "_clap_name"), FragTrap(name_e + "_frag_name"), ScavTrap(name_e + "_scav_name"),  name(name_e) {
	std::cout << "DiamondTrap name constructor" << std::endl;
	FragTrap tmp("tmp");
	hit_points = tmp.getHP();
	attack_damage = tmp.getAD();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src){
	std::cout << "DiamondTrap copy constructor" << std::endl;
	name = src.name;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other){
	std::cout << "DiamondTrap assignment operator" << std::endl;
	if (this != &other){
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hit_points = other.hit_points;
		this->name = other.name;
		ClapTrap::name = other.ClapTrap::name;
	}
	return *this;
}
DiamondTrap::~DiamondTrap(){std::cout << "DiamondTrap destructor" << std::endl;}

void DiamondTrap::whoAmI(){
	std::cout << "I'm DiamondTrap named " << name << " my ClapTrap name is: " << ClapTrap::name << " " << std::endl;
}
