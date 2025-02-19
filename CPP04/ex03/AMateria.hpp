/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:49:16 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/19 13:45:18 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
	private:
		AMateria();
		static AMateria *allmateria[100];
		int index;
	protected:
		bool is_equipped;
		std::string type;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		AMateria & operator=(AMateria const &other);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		void setEquipped();
		void unsetEquipped();
		bool isEquipped();
		static void cleanMateria();
		static int addMateria(AMateria *materia);
		static void removeMateria(int idx);
		int getIndex()const;
};
