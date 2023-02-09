/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:13:16 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/16 17:55:29 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &otherObject);
	Brain &operator=(const Brain &otherObject);
	~Brain();
	void	setIdeas(std::string str, int num);
	void	printIdeas(int num) const;
};


#endif