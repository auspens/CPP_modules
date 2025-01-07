/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:32:49 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/07 13:49:42 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Contact
{
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_secret;
	int			_phone_num;

public:
	Contact();
	Contact(Contact const &src);
	Contact(std::string name, std::string last_name, std::string nick, std::string secret, int num);
	~Contact();

	Contact &operator=(Contact const &other);

	std::string getName(void) const;
	void setName(void);

	std::string getLastName(void) const;
	void setLastName(void);

	std::string getNickname(void) const;
	void setNickname (void);

	std::string getSecret(void) const;
	void setSecret(void);

	int getPhone(void)const;
	void setPhone(void);

	void displayContact(void);
};

#endif
