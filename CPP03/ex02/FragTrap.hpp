/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:17:54 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/31 17:06:22 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap& operator=(FragTrap const & other);
		~FragTrap();
		void highFivesGuys(void);
		void attack(const std::string& target);
};
