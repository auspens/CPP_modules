/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 10:35:41 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){

	std::cout << "Expected values for DiamondTrap: energy points 50, attack damage 30, hit points 100, attack() - ScavTrap" << std::endl;

	std::cout << "\nCREATE A DIAMONDTRAP" << std::endl;
	DiamondTrap diamondtrap("DiamondTrap");
	diamondtrap.whoAmI();
	diamondtrap.printValues();
	diamondtrap.attack("some random guy");
	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();

	std::cout << "\nCREATE A DIAMONDTRAP2 AND DO CLAPTRAP::ATTACK AND DIAMONDTRAP2.PRINTVALUES" << std::endl;
	DiamondTrap diamondtrap2("DiamondTrap2");
	diamondtrap2.whoAmI();
	diamondtrap2.ClapTrap::attack("ScavTrap");
	diamondtrap2.printValues();

	std::cout << "\nCHANGE DIAMONDTRAP2 HIT POINTS AND ENERGY, ASSIGN A DIAMONDTRAP2 TO DIAMOND TRAP" << std::endl;
	diamondtrap2.beRepaired(15);
	diamondtrap2.printValues();
	diamondtrap = diamondtrap2;
	diamondtrap.whoAmI();
	diamondtrap.printValues();

	std::cout << "\nCREATE DIAMONDTRAP3 BY COPYING DIAMOND TRAP" << std::endl;
	diamondtrap.printValues();
	DiamondTrap diamondtrap3(diamondtrap);
	diamondtrap3.whoAmI();
	diamondtrap3.printValues();

	std::cout << "\n CREATE A CLAPTRAP POINTER AND ASSIGN DIAMONDTRAP3 TO IT" << std::endl;
	ClapTrap *claptrap_ptr = &diamondtrap3;
	claptrap_ptr->printValues();
	claptrap_ptr->attack("some random guy");

	std::cout << "\n SLICE DIAMONDTRAP2 TO FRAGTRAP BY COPY CONSTRUCTOR" << std::endl;
	FragTrap fragrtrap(diamondtrap2);
	fragrtrap.printValues();
	fragrtrap.attack("some random guy");
}
