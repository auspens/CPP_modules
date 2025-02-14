/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:53:33 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/14 17:26:16 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
	public:
	Ice();
	Ice(Ice const &src);
	Ice &operator=(Ice const &other);
	~Ice();
	Ice *clone()const;
	void use(ICharacter& target);
};
