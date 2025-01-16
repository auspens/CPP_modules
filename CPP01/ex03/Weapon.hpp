/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:07:57 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/16 11:21:09 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon{
	private:
		std::string type;
		Weapon();
	public:
		Weapon(std::string type);
		Weapon(Weapon const & src);
		Weapon& operator=(Weapon const &other);
		~Weapon(void);
		std::string const & getType(void) const;
		void setType(std::string srcType);
};
