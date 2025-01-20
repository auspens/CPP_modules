/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:50:25 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/20 17:18:02 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	levels[0] = "ERROR";
	levels[1] = "WARNING";
	levels[2] = "INFO";
	levels[3] = "DEBUG";

	filter = INVALID;
}

Harl::Harl(Harl const & src){
	*this = src;
}

Harl & Harl::operator=(Harl const & other){
	for (int i = 0; i < 4; ++i){
		this->levels[i] = other.levels[i];
	}
	this->filter=other.filter;
	return (*this);
}

Harl::~Harl(){}



void Harl::debug( void ){
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \
I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! \
If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for \
years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::setFilter( char *str ){
	std::string level (str);
	for(std::string::size_type i = 0; i < 4; i++){
		if (levels[i] == level){
			filter = static_cast<Filters>(i);
			break ;
		}
	}
	switch (filter){
		case DEBUG: debug();
		case INFO: info();
		case WARNING: warning();
		case ERROR: error(); break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break;
	}
}
