/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:20:58 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/03 16:25:12 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef REPLACE_HPP
# define REPLACE_HPP

class Replace
{
private:
	std::string	_fileName;
	std::string	_s1;
	std::string	_s2;
public:
	Replace(std::string fileName, std::string s1, std::string s2);
	~Replace();
	void	replace();
};

#endif