/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:30:34 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/06 17:10:54 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(){
	_num_contacts = 0;
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
	}
	return(*this);
}

void PhoneBook:: listen(void)
{
	std::string cmd;
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT): " << std::endl;
		std::cin >> cmd;
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
	int i = _num_contacts%8;
	std::string	str;
	_contacts[i].setName("");
	while (_contacts[i].getName().size() == 0)
	{
		std::cout<<"Enter contact name: "<<std::endl;
		std::cin>>str;
		_contacts[i].setName(str);
	}
	_contacts[i].setLastName("");
	while (_contacts[i].getLastName().size() == 0)
	{
		std::cout<<"Enter contact last name: "<<std::endl;
		std::cin>>str;
		_contacts[i].setLastName(str);
	}
	_contacts[i].setNickname("");
	while (_contacts[i].getNickname().size() == 0)
	{
		std::cout<<"Enter contact nickname: "<<std::endl;
		std::cin>>str;
		_contacts[i].setNickname(str);
	}
	str = "";
	int num;
	while (str.size() < 5)
	{
		std::cout << "Enter phone number, at least 5 digits without separators: " << std::endl;
		std::cin >> str;
		for(std::basic_string<char>::size_type j = 0; j < str.size(); j ++)
		{
			if(isdigit(str[j]) == 0)
				str = "";
		}
	}
	std::stringstream(str)>>num;
	_contacts[i].setPhone(num);
	_contacts[i].setSecret("");
	while (_contacts[i].getSecret().size() == 0)
	{
		std::cout<<"Enter darkest secret: "<<std::endl;
		std::cin>>str;
		_contacts[i].setSecret(str);
	}
	if (_num_contacts < 8)
		++_num_contacts;
}

void PhoneBook:: search(){
	if (_num_contacts < 1)
	{
		std::cout << "No entries to display. Use ADD to add entry\n" << std::endl;
		return ;
	}
	displayList();
	int i = -1;
	std::string str;
	while (1)
	{
		std::cout<<"\nEnter the index of contact (between 0 and " << _num_contacts - 1 << "): " <<std::endl;
		std::cin >> str;
		std::stringstream(str) >> i;
		for(std::basic_string<char>::size_type j = 0; j < str.size(); j ++)
		{
			if(isdigit(str[j]) == 0)
				continue;
		}
		if (i >=0 && i < _num_contacts)
			break;
	}
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
