/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:17:54 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 10:38:48 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	protected:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap& operator=(FragTrap const & other);
		virtual ~FragTrap();
		void highFivesGuys(void);
		void attack(const std::string & target);
};
