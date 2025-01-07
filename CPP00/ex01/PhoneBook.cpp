/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:30:34 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/07 14:04:27 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
		:_num_contacts(0), _total_contacts_entered(0), _contacts()
{
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
			_contacts[i] = other._contacts[i];
		_num_contacts = other._num_contacts;
		_total_contacts_entered = other._total_contacts_entered;
	}
	return(*this);
}

void PhoneBook:: listen(void)
{
	std::string cmd;
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT): " << std::endl;
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			add();
		else if (cmd.compare("SEARCH") == 0)
			search();
		else if (cmd.compare("EXIT") == 0)
			return ;
		else
			continue;
	}
}

void PhoneBook:: add(void){
	int i = _total_contacts_entered%8;
	std::string	str;
	_contacts[i].setName();
	_contacts[i].setLastName();
	_contacts[i].setNickname();
	_contacts[i].setPhone();
	_contacts[i].setSecret();
	if (_num_contacts < 8)
		++_num_contacts;
	_total_contacts_entered++;
}

void PhoneBook:: search(){
	if (_num_contacts < 1)
	{
		std::cout << "No entries to display. Use ADD to add entry\n" << std::endl;
		return ;
	}
	displayList();
	std::cout<<"\nEnter the index of contact (between 0 and " << _num_contacts - 1 << ") " <<std::endl;
	std::string str;
	std::getline(std::cin, str);
	while (!validIndex(str))
	{
		std::cout<<"\nInvalid index. Index should be between 0 and " << _num_contacts - 1 <<std::endl;
		std::getline(std::cin, str);
	}
	int i = str[0] - '0';
	_contacts[i].displayContact();
}

void PhoneBook:: displayList(){
	std::string sep= "|";
	std::string line = sep + std::string(43, '-') + sep;
	std::cout << line<<std::endl;
	std::cout << sep << std::setw(10) << "Index" << sep
					<< std::setw(10) << "First name" << sep
					<< std::setw(10) << "Last name" << sep
					<< std::setw(10) << "Nickname" << sep << std::endl;
	std::cout << line << std::endl;
	std::string fname;
	std::string	lname;
	std::string nname;
	for (int i = 0; i < _num_contacts; i++)
	{
		copyForDisplay(fname, _contacts[i].getName());
		copyForDisplay(lname, _contacts[i].getLastName());
		copyForDisplay(nname, _contacts[i].getNickname());
		std::cout << "|" << std::setw(10) << i << sep
					<< std::setw(10) << fname << sep
					<< std::setw(10) << lname << sep
					<< std::setw(10) << nname << sep << std::endl;
	}
}

void PhoneBook:: copyForDisplay(std::string& res, std::string const &src){
	if (src.size() > 10)
		res = std::string(src, 0, 9) + ".";
	else
		res = std::string(src);
}

bool PhoneBook:: validIndex(std::string const &str){
	if (str.length() != 1)
		return false;
	if (str[0] < '0' || str[0] > '0' + _num_contacts - 1)
		return false;
	return true;
}
