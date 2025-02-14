/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:12:49 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/14 17:25:53 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AMateria.hpp"

class Cure : public AMateria{
	public:
	Cure();
	Cure(Cure const &src);
	Cure &operator=(Cure const &other);
	~Cure();
	Cure *clone()const;
	void use(ICharacter& target);
};

