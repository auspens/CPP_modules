/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:33:09 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/06 17:06:09 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::Contact(Contact const &src){
	*this = src;
}

Contact::Contact(std::string name, std::string last_name, std::string nick, std::string secret, int num)
			:_first_name(name), _last_name(last_name), _nickname(nick), _secret(secret), _phone_num(num){
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
void Contact::setName(const std::string &src){
	_first_name = src;
}
std::string Contact ::getLastName(void) const{
	return (_last_name);
}
void Contact::setLastName(const std::string &src){
	_last_name = src;
}
std::string Contact ::getNickname(void) const{
	return (_nickname);
}
void Contact::setNickname(const std::string &src){
	_nickname = src;
}
std::string Contact ::getSecret(void) const{
	return (_secret);
}
void Contact::setSecret(const std::string &src){
	_secret = src;
}
int Contact ::getPhone(void) const{
	return (_phone_num);
}
void Contact::setPhone(const int &src){
	_phone_num = src;
}
void Contact:: displayContact(void){
	std::cout << "Name: " << getName()
			<< "\nLast name: " << getLastName()
			<< "\nNickname: " << getNickname()
			<< "\nPhone: " << getPhone()
			<< "\nDarkest secret: " << getSecret() << std::endl;
}
