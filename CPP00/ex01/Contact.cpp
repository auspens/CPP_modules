/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:33:09 by auspensk          #+#    #+#             */
/*   Updated: 2024/12/20 17:32:26 by auspensk         ###   ########.fr       */
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
}
