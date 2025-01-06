/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:27:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/06 15:04:08 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	int		_num_contacts;
	Contact	_contacts[8];
	void	displayList(void);
	void	copyForDisplay(std::string& res, std::string const &src);
public:
	PhoneBook(/* args */);
	PhoneBook(PhoneBook const &src);
	~PhoneBook();
	PhoneBook &operator=(PhoneBook const &other);
	void listen(void);
	void add(void);
	void search(void);

};




#endif
