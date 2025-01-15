/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:33:09 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 10:01:13 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
		: _first_name(""), _last_name(""), _nickname(""), _secret(""), _phone_num("")
{
}

Contact::Contact(Contact const &src){
	*this = src;
}

Contact::Contact(std::string name, std::string last_name, std::string nick, std::string secret, std::string num)
			:_first_name(name), _last_name(last_name), _nickname(nick), _secret(secret), _phone_num(num)
{
}

Contact::~Contact(){
}

Contact & Contact::operator=(Contact const &other)
{
	_first_name = other._first_name;
	_last_name = other._last_name;
	_nickname = other._nickname;
	_secret = other._secret;
	_phone_num = other._phone_num;
	return (*this);
}

std::string Contact ::getName(void) const{
	return (_first_name);
}

void Contact::setName(void){
	while (1)
	{
		std::cout<<"Enter contact name: "<<std::endl;
		std::getline(std::cin, _first_name);
		if(_first_name.length() != 0)
			break;
	}
}

std::string Contact ::getLastName(void) const{
	return (_last_name);
}

void Contact::setLastName(void){
	while (1)
	{
		std::cout<<"Enter contact last name: "<<std::endl;
		std::getline(std::cin, _last_name);
		if (_last_name.length() != 0)
			break;
	}
}

std::string Contact ::getNickname(void) const{
	return (_nickname);
}

void Contact::setNickname(void){
	while (1)
	{
		std::cout<<"Enter contact nickname: "<<std::endl;
		std::getline(std::cin, _nickname);
		if(_nickname.length() != 0)
			break;
	}
}

std::string Contact ::getSecret(void) const{
	return (_secret);
}

void Contact::setSecret(void){
	while (1)
	{
		std::cout<<"Enter contact darkest secret: "<<std::endl;
		std::getline(std::cin, _secret);
		if (_secret.length() != 0)
			break;
	}
}
std::string Contact ::getPhone(void) const{
	return (_phone_num);
}

void Contact::setPhone(void){
	while (1)
	{
		std::cout<<"Enter phone number, at least 5 digits without separators: "<<std::endl;
		std::getline(std::cin, _phone_num);
		for(std::basic_string<char>::size_type j = 0; j < _phone_num.size(); j ++)
		{
			if(isdigit(_phone_num[j]) == 0)
				_phone_num = "";
		}
		if (_phone_num.length() > 4)
			break;
	}
}

void Contact:: displayContact(void){
	std::cout << "Name: " << getName()
			<< "\nLast name: " << getLastName()
			<< "\nNickname: " << getNickname()
			<< "\nPhone: " << getPhone()
			<< "\nDarkest secret: " << getSecret() << std::endl;
}
