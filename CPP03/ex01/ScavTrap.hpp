/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:14:19 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 14:04:18 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap& operator=(ScavTrap const & other);
		~ScavTrap();
		void attack (const std::string& target);
		void guardGate();
};
