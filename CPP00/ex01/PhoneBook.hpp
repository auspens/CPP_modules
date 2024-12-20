/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:27:45 by auspensk          #+#    #+#             */
/*   Updated: 2024/12/20 17:31:43 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	int		_num_contacts;
public:
	Contact	contacts[8];

	PhoneBook(/* args */);
	PhoneBook(PhoneBook const &src);
	~PhoneBook();
	PhoneBook &operator=(PhoneBook const &other);

	void add(void);
	void search(void);
	void exit(void);
};




#endif
