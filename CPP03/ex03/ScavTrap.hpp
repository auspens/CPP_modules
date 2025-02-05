/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:14:19 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/04 14:58:52 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	protected:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(std::string name_e, unsigned int hp, unsigned int ep, unsigned int ad);
		ScavTrap(ScavTrap const & src);
		ScavTrap& operator=(ScavTrap const & other);
		virtual ~ScavTrap();
		void attack (const std::string& target);
		void guardGate();
};
