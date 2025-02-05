/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 16:23:39 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	std::cout << "CREATING CLAPTRAP" << std::endl;
	ClapTrap claptrap("Claptrap");
	claptrap.printValues();

	std::cout << "CREATING SCAVTRAP" << std::endl;
	ScavTrap scavtrap("ScavTrap");
	scavtrap.printValues();

	std::cout << "CREATING FRAGTRAP" << std::endl;
	FragTrap fragtrap("Fragtrap");
	fragtrap.printValues();

	std::cout << "CLAPTRAP ATTACK, TAKE DAMAGE" << std::endl;
	claptrap.attack("some random guy");
	claptrap.takeDamage(15);
	std::cout << "FRAGTRAP ATTACK, TAKE DAMAGE, HIGHFIVE" << std::endl;
	fragtrap.attack("some random guy");
	fragtrap.takeDamage(15);
	fragtrap.highFivesGuys();
	std::cout << "SCAVTRAP ATTACK, TAKE DAMAGE, GUARDGATE" << std::endl;
	scavtrap.attack("some random guy");
	scavtrap.takeDamage(95);
	scavtrap.beRepaired(15);
	scavtrap.guardGate();

	std::cout << "CREATING INSTANCE OF FRAGTRAP, ASSIGNING ITS ADDRESS TO CLAPTRAP POINTER AND CALLING ATTACK" << std::endl;
	FragTrap fragtrap2 ("Fragtrap2");
	ClapTrap *claptrap_ptr = &fragtrap2;
	claptrap_ptr->attack("some random guy");
	std::cout << "CREATING INSTANCE OF SCAVTRAP, ASSIGNING ITS ADDRESS TO CLAPTRAP POINTER AND CALLING ATTACK" << std::endl;
	ScavTrap scavtrap2 ("Scavtrap2");
	claptrap_ptr = &scavtrap2;
	claptrap_ptr->attack("some random guy");
}
