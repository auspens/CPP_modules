/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:36:37 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 13:09:30 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//generates randomly a pointer to the object of Class A, B or C

#pragma once
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Generator{
	public:
	static Base *generate(void);

	private:
	Generator();
	Generator(Generator const &src);
	Generator & operator=(Generator const &other);
	~Generator();
};
