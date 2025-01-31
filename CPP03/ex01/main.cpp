/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 14:06:51 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	ClapTrap claptrap("Claptrap");
	ScavTrap scavtrap("ScavTrap");

	claptrap.attack("ScavTrap");
	scavtrap.takeDamage(95);
	scavtrap.takeDamage(7);
	scavtrap.takeDamage(1);
	scavtrap.beRepaired(15);
	for(int i = 0; i<5; ++i)
		scavtrap.attack("Claptrap");
	scavtrap.guardGate();
	ScavTrap scavtrap2 ("Scavtrap2");
	ClapTrap *claptrap_ptr = &scavtrap2;
	claptrap_ptr->attack("Claptrap");
}
