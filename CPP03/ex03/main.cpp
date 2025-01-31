/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 14:47:20 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ClapTrap claptrap("Claptrap");
	ScavTrap scavtrap("ScavTrap");
	FragTrap fragtrap("Fragtrap");

	claptrap.attack("ScavTrap");
	fragtrap.attack("ScavTrap");
	scavtrap.takeDamage(95);
	scavtrap.beRepaired(15);
	scavtrap.guardGate();
	fragtrap.highFivesGuys();

	ScavTrap scavtrap2 ("Scavtrap2");
	FragTrap fragtrap2 ("Fragtrap2");
	ClapTrap *claptrap_ptr = &scavtrap2;
	claptrap_ptr->attack("Claptrap");
	claptrap_ptr = &fragtrap2;
	claptrap_ptr->attack("Fragtrap");
}
