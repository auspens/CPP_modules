/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:25:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/16 11:21:55 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(){};
HumanA::HumanA(std::string name, Weapon const& weapon): name(name), weapon(weapon){};
void HumanA::attack() const {
	std::cout << name << " attacks with " << weapon.getType() << std::endl;
}

