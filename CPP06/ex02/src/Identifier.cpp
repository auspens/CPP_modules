/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:55:28 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 13:14:26 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Identifier.hpp"

Identifier::Identifier(){}
Identifier::Identifier(Identifier const &src){(void)src;}
Identifier & Identifier::operator=(Identifier const &other){(void)other; return *this;}
Identifier::~Identifier(){}

void Identifier::identify(Base* p){
	if (dynamic_cast<A*>(p)!= 0)
	{
		std::cout << "A pointer identified" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p) != 0)
	{
		std::cout << "B pointer identified" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p) != 0)
	{
		std::cout << "C pointer identified" << std::endl;
		return;
	}
	std::cout << "Failed to identify type" << std::endl;
}

void Identifier::identify(Base& p){
	try{
		A &r_a = dynamic_cast<A&>(p);
		std::cout << "A reference identified" << std::endl;
		(void)r_a;
	}
	catch (std::exception &e){}
	try{
		B &r_b = dynamic_cast<B&>(p);
		std::cout << "B reference identified" << std::endl;
		(void)r_b;
	}
	catch (std::exception &e){}
	try{
		C &r_c = dynamic_cast<C&>(p);
		std::cout << "C reference identified" << std::endl;
		(void)r_c;
	}
	catch (std::exception &e){std::cout << "Failed to identify type" << std::endl;}
}
