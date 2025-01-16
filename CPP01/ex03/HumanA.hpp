/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:17:32 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/16 11:24:40 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon const &	weapon;
	public:
		HumanA(std::string name, Weapon const & weapon);
		~HumanA();
		void attack() const;
};
