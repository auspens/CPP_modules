/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:14:53 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/15 15:55:17 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string my_string = "HI THIS IS BRAIN";
	std:: string *my_pointer = &my_string;
	std::string& my_reference = my_string;

	std::cout << "my_string address: " << &my_string << "\n"
			<<  "my_pointer address: " << my_pointer << "\n"
			<< "my_reference address:" << &my_reference << "\n"
			<< "my_string value: " << my_string << "\n"
			<< "my_pointer value: " << *my_pointer << "\n"
			<< "my_reference value: " << my_reference << "\n" << std::endl;
}
