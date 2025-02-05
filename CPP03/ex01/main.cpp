/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 16:06:52 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	std::cout << "CREATING A CLAPTRAP" << std::endl;
	ClapTrap claptrap("Claptrap");
	claptrap.printValues();
	std::cout << "CREATING A SCAVTRAP" << std::endl;
	ScavTrap scavtrap("ScavTrap");
	scavtrap.printValues();

	std::cout << "CALLING .ATTACK ON CLAPTRAP" << std::endl;
	claptrap.attack("ScavTrap");

	std::cout << "CALLING TAKE DAMAGE, BE REPAIRED, ATTACK, GUARD GATE ON SCAVTRAP" << std::endl;
	scavtrap.takeDamage(95);
	scavtrap.beRepaired(15);
	scavtrap.attack("Claptrap");
	scavtrap.guardGate();

	std::cout << "CREATING A SCAVTRAP, ASSIGNING ITS ADDRESS TO CLAPTRAP POINTER, CALLING ATTACK ON CLAPTRAP POINTER" << std::endl;
	ScavTrap scavtrap2 ("Scavtrap2");
	scavtrap2.printValues();
	ClapTrap *claptrap_ptr = &scavtrap2;
	claptrap_ptr->printValues();
	claptrap_ptr->attack("Claptrap");
}
