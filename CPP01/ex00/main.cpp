/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:22:33 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 14:40:14 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie original("Patient_zero");
	std::cout << "Creating Bill on the heap" << std::endl;
	Zombie *bill = original.newZombie("Bill");
	std::cout << "Creating Stan on the stack" << std::endl;
	original.randomChump("Stan");
	std::cout << "Bill has bitten someone" << std::endl;
	bill->randomChump("some_random_chump");
	std::cout << "Bill has bitten Mary" << std::endl;
	Zombie *mary = bill->newZombie("Marry");
	delete mary;
	delete bill;
}
