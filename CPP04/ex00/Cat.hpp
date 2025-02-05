/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:00:03 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 11:08:10 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &src);
		Cat& operator=(const Cat &other);
		~Cat();
		void makeSound()const;
};


