/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:24:43 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 11:10:50 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//some data structure to serialize/deserialize
#pragma once
#include <string>

class Data{

	public:
	Data();
	Data(std::string name, int age, std::string nick);
	Data (Data const &src);
	Data &operator=(Data const &other);
	~Data();

	std::string const &getName()const;
	int getAge()const;
	std::string const &getNick()const;
	void setName(std::string name);
	void setAge(int age);
	void setNick (std::string nick);

	private:
	std::string _name;
	int _age;
	std::string _nick;
};
