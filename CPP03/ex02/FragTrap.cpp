/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:22:21 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/17 13:52:58 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){}
FragTrap::FragTrap(std::string name) :ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap name constructor" << std::endl;
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
