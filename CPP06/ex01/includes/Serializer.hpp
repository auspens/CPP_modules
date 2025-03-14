/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:08:14 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 11:19:49 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//serializer class converts any given pointer to uintptr_t using reinterpret cast,
//effectively making a simple binary copy of the value from given pionter to a uintptr_t

#pragma once
#include <stdint.h>
#include "Data.hpp"

class Serializer{
	public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

	private:
	Serializer();
	Serializer(Serializer const &src);
	Serializer &operator=(Serializer const &other);
	~Serializer();
};
