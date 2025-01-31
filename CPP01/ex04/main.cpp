/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:16:36 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/16 15:18:15 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <cstring>

int	main(int argc, char *argv[]){
	if (argc != 4 || *argv[2] == '\0') //check the arguments
	{
		std::cout << "Need three arguments" << std::endl;
		return (0);
	}

	std::ifstream inFile(argv[1]); //open file, read to strstream and then save to string
	if (!inFile.is_open())
	{
		std::cout << "Failed to open file" << std::endl;
		return (1);
	}
	std::stringstream strStream;
	strStream << inFile.rdbuf();
	std::string buffer = strStream.str();
	std::string fileContents = buffer;
	inFile.close();

	size_t found = fileContents.find(argv[2]); //find a match, erase it, replace with s2 in a loop. do not search already checked section
	size_t srcLen = strlen(argv[2]);
	size_t dstLen = strlen(argv[3]);
	while (found != std::string::npos)
	{
		fileContents.erase(found, srcLen);
		fileContents.insert(found, argv[3]);
		found += dstLen;
		found = fileContents.find(argv[2], found);
	}

	std::string argv_1(argv[1]); //compile a name: convert argv[1] to std string, add suffix, convert back to cstring to use in ofstream constructor.
	std::string sname = argv_1 + ".replace";
	const char *cname = sname.c_str();
	std::ofstream outFile(cname); //Write to outfile
	if (!outFile.is_open())
	{
		std::cout << "Failed to open outfile" << std::endl;
		return (1);
	}
	outFile << fileContents << std::endl;
}
