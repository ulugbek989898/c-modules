/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:15:14 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/04 10:00:25 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
private:
	/* data */
public:
	Harl(/* args */);
	~Harl();
	void	debug ();
	void	info ();
	void	warning ();
	void	error ();
	void complain (std::string level);
};

#endif