/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:23:29 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/03 17:36:59 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>

Replace::Replace(std::string fileName, std::string s1, std::string s2)
{
	_fileName = fileName;
	_s1 = s1;
	_s2 = s2;
}

Replace::~Replace(){}

void	Replace::replace()
{
	std::ifstream	inData;
	std::ofstream	outData;
	std::string		strOutFile;
	std::string		line;
	std::string		sumLine;
	size_t			i;

	inData.open(_fileName);
	if (!inData)
	{
		inData.close();
		std::cout << "Cannot open input file. Program terminates." << std::endl;
		return ;
	}
	if (!_s1.length())
	{
		std::cout << "You entered empty s1. Program terminates." << std::endl;
		return ;
	}

	while(std::getline(inData, line))
	{
		i = line.find(_s1);
		while(i != std::string::npos)
		{
			line.erase(i, _s1.length());
			line.insert(i, _s2);
			i = line.find(_s1);
		}
		sumLine.append(line);
		sumLine.append("\n");
	}
	strOutFile = _fileName.append(".replace");
	outData.open(strOutFile);
	if (!outData)
	{
		std::cout << "Cannot open output file. Program terminates." << std::endl;
		outData.close();
		return ;
	}
	outData << sumLine;
	inData.close();
	outData.close();
}