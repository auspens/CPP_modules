/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:50:47 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 15:12:02 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Brain{
	public:
		Brain();
		Brain(const Brain &src);
		Brain& operator=(const Brain &other);
		~Brain();
		const std::string getIdea(unsigned int ind) const;
		void setIdea(std::string const & idea, unsigned int ind);
	private:
		std::string ideas[100];
};
