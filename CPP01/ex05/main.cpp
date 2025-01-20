/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:09:50 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/20 17:05:26 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
	Harl harl;
	std::string listOfComplaints[] = {"debug", "warning", "info", "error", "blabla"};
	for (unsigned int i = 0; i < sizeof(listOfComplaints)/sizeof(listOfComplaints[0]); i++)
	{
		std::cout << "Complaint: " << listOfComplaints[i] << std::endl;
		harl.complain(listOfComplaints[i]);
	}
}
