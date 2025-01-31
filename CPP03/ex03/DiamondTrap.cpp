/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:25:27 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 17:44:06 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(){std::cout << "DiamondTrap default constructor" << std::endl;};
DiamondTrap::DiamondTrap(std::string name_e) : ClapTrap(name_e){
	std::cout << "DiamondTrap name constructor" << std::endl;
	hit_points = FragTrap::hit_points;
	attack_damage = FragTrap::attack_damage;
	energy_points = ScavTrap::energy_points;
	ClapTrap::name = name_e + "_clap_name";
}
DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src){
	std::cout << "DiamondTrap copy constructor" << std::endl;
	ClapTrap::name = src.name + "_clap_name";
}

DiamondTrap::~DiamondTrap(){std::cout << "DiamondTrap destructor" << std::endl;}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}
