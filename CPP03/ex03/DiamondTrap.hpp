/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:07:17 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 17:19:26 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap(std::string name_e);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap& operator=(DiamondTrap const &other);
		~DiamondTrap();
		void whoAmI();
	private:
		std::string name;
		DiamondTrap();
};
