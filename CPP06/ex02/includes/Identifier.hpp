/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:52:57 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 13:11:43 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//accepts a pointer or reference to of a base class type and attempts to dynamic_cast it
//to a derived class pointer/reference. If it succeeds, than the object pointed to belongs to that type. Message is printed.

#pragma once
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

class Identifier{
	public:
	static void identify(Base* p);
	static void identify(Base& p);

	private:
	Identifier();
	Identifier(Identifier const &src);
	Identifier & operator=(Identifier const &other);
	~Identifier();
};
