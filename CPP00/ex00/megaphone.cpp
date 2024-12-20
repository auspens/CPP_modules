/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:58:02 by auspensk          #+#    #+#             */
/*   Updated: 2024/12/20 12:29:20 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	int			i;
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		str = argv[i];
		for(std::string::size_type size = 0; size < str.size(); size ++)
			str[size] = toupper(str[size]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
