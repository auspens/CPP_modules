/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:47:09 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 11:18:59 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};
Zombie::Zombie(std::string name):name(name){};
Zombie::Zombie(Zombie const &src){
	*this = src;
}
Zombie & Zombie::operator=(Zombie const &other){
	name = other.name;
	return(*this);
}
Zombie::~Zombie(){
	std::cout << name << ": destroyed" << std::endl;
}
void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
