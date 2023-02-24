/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 06:51:54 by hkhater           #+#    #+#             */
/*   Updated: 2023/02/24 04:11:21 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <ios>

void	fakeSed(char *fileName, std::string toFind, std::string toReplace) {
	std::ifstream	file(fileName);
	std::string 	str = fileName;
	std::string		content;
	size_t		found;
	size_t		j;
	
	if (!file) {
		std::cout << "File " << fileName << " does not exist" << std::endl;
		return ;
	}
	str += ".replace";
	std::ofstream	tmp(str.c_str());
	if (!tmp)
		return ;
	size_t lenRep = toReplace.length();
	size_t lenFind = toFind.length();
	while (getline(file, content))
	{
		j = 0;
		while((found = content.find(toFind, j)) != std::string::npos)
		{
			content.erase(found, lenFind);
			content.insert(found, toReplace);
			j = found + lenRep;			
		}
		tmp << content << std::endl;
	}
	file.close();
	tmp.close();
	return ;
}

int	main(int ac, char** av) {
	const std::string red("\033[0;31m");
	const std::string reset("\033[0m");
	if (ac != 4) {
		std::cout << "Invalid input, please try -> " << red << "./sedIsForLosers  [filename]  [str_to_find]  [str_to_replace_it_with]" << reset << std::endl;
		return EXIT_SUCCESS;
	}
	std::string find = av[2];
	std::string replace = av[3];
	fakeSed(av[1], find, replace);
	return EXIT_SUCCESS;
}
