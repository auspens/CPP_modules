/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:32:54 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 11:13:37 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"

Data::Data():_name(""),_age(0),_nick(""){}
Data::Data(std::string name, int age, std::string nick)
	:_name(name), _age(age), _nick(nick){}
Data::Data (Data const &src)
	:_name(src._name), _age(src._age), _nick(src._nick){}
Data &Data::operator=(Data const &other){
	if (this != &other){
		_name = other._name;
		_age = other._age;
		_nick = other._nick;
	}
	return *this;
};
Data::~Data(){}

std::string const &Data::getName()const{return _name;}
int Data::getAge()const{return _age;}
std::string const & Data::getNick()const{return _nick;}
void Data::setName(std::string name){_name = name;}
void Data::setAge(int age){_age = age;}
void Data::setNick (std::string nick){_nick = nick;}

