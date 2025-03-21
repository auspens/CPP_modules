/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:48:42 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 15:46:04 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal(std::string type);
		Animal( Animal const &src);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void makeSound()const = 0;
		const std::string& getType()const;
		Animal();
};
