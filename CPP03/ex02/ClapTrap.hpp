/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:40:19 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 16:09:45 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
		ClapTrap();
	public:
		ClapTrap(std::string name_e);
		ClapTrap(ClapTrap const & src);
		ClapTrap(std::string name_e, unsigned int hp, unsigned int ep, unsigned int ad);
		ClapTrap& operator=(ClapTrap const & other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printValues();
};
