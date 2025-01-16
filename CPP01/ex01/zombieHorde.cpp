/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:47:12 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 15:09:45 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * Zombie::zombieHorde( int N, std::string name ){
	Zombie *horde = (Zombie *) ::operator new(sizeof(Zombie) * N);
	for (int i = 0; i < N; i++)
		new (&horde[i]) Zombie(name);
	return(horde);
}
