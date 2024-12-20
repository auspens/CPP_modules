/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:30:34 by auspensk          #+#    #+#             */
/*   Updated: 2024/12/20 17:31:54 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
}

PhoneBook::PhoneBook(PhoneBook const &src){
	*this = src;
}

PhoneBook::~PhoneBook(){
}

PhoneBook &	PhoneBook::operator=(PhoneBook const &other){
	if (this != &other)
	{
		for (int i = 0; i < 8; i++)
			contacts[i] = other.contacts[i];
		_num_contacts = other._num_contacts;
	}

}

void PhoneBook:: add(void){

}
