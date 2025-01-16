/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:22:33 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 15:12:14 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie original("Patient_zero");
	std::cout << "Creating zombie horde of 5" << std::endl;
	Zombie *horde = original.zombieHorde(5, "Bill");
	for (int i = 0; i < 5; i++){
		std::cout << "Zombie number " << i << ":" << std::endl;
		horde[i].announce();
	}
	delete(horde);
}
