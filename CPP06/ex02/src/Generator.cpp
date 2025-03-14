/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:39:19 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 13:07:56 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Generator.hpp"
#include "iostream"

Generator::Generator(){}
Generator::Generator(Generator const &src){(void)src;}
Generator & Generator::operator=(Generator const &other){(void)other; return *this;}
Generator::~Generator(){}

Base *Generator::generate(void){
	int v = rand() % 3;
	switch (v)
	{
	case 0: std::cout<<"Created A" << std::endl; return new A;
	case 1: std::cout<<"Created B" << std::endl; return new B;
	case 2: std::cout<<"Created C" << std::endl; return new C;
	default: std::cout << "Unexpected value in generate function" << std::endl; return NULL;
	}
}
