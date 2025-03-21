/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:48 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 10:17:11 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2("ClapTrap2");

	claptrap.attack("Claptrap2");
	claptrap2.takeDamage(5);
	claptrap2.takeDamage(6);
	claptrap2.takeDamage(1);
	claptrap2.beRepaired(7);
	for(int i = 0; i<5; ++i)
		claptrap2.attack("Claptrap");
}
