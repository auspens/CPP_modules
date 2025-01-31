/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:07:17 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 17:26:20 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : FragTrap, ScavTrap{
	public:
		DiamondTrap(std::string name_e);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap& operator=(DiamondTrap const &other);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI();
		ClapTrap::name;
	private:
		std::string name;
		DiamondTrap();
};
