/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:50:25 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/20 17:02:17 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	func[0] = &Harl::debug;
	func[1] = &Harl::info;
	func[2] = &Harl::warning;
	func[3] = &Harl::error;
}

Harl::Harl(Harl const & src){
	*this = src;
}

Harl & Harl::operator=(Harl const & other){
	for (int i = 0; i < 4; i++){
		this->levels[i] = other.levels[i];
		this->func[i] = other.func[i];
	}
	return (*this);
}

Harl::~Harl(){}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \
I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! \
If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for \
years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
	for(std::string::size_type i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*func[i])();
			return ;
		}
	}
	std::cout << "LaLa-LaLa-La" << std::endl;
}
