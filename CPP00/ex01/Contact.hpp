/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:32:49 by auspensk          #+#    #+#             */
/*   Updated: 2024/12/20 17:25:42 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
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
	void setName(std::string const &src);

	std::string getLastName(void) const;
	void setLastName(std::string const &src);

	std::string getNickname(void);
	void setNickname (std::string const &src);

	std::string getSecret(void) const;
	void setSecret(std::string const &src);

	int getPhone(void)const;
	void setPhone(int const &src);
};


