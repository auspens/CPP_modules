/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:12:53 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 11:23:02 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"
#include <iostream>

int main(){
	Data d("Bill", 7, "B");
	uintptr_t  raw = Serializer::serialize(&d);
	Data *d2 = Serializer::deserialize(raw);
	if (&d == d2)
		std::cout << "Success" << std::endl;
	else
		std::cout << "Ooopsie" << std::endl;
}
