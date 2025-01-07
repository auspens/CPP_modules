/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:27:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/07 13:50:35 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	int		_num_contacts;
	int		_total_contacts_entered;
	Contact	_contacts[8];
	void	displayList(void);
	void	copyForDisplay(std::string& res, std::string const &src);
	bool	validIndex(std::string const &str);
public:
	PhoneBook();
	PhoneBook(PhoneBook const &src);
	~PhoneBook();
	PhoneBook &operator=(PhoneBook const &other);
	void listen(void);
	void add(void);
	void search(void);
};

#endif
