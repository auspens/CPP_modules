/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:41:45 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 15:11:24 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string name;
	Zombie();
public:
	void announce( void );

	Zombie(std::string name);
	Zombie(Zombie const &src);
	Zombie &operator=(Zombie const &other);
	~Zombie();
	Zombie* zombieHorde( int N, std::string name );
};


#endif
