/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:19:29 by uisroilo          #+#    #+#             */
/*   Updated: 2023/01/03 16:27:21 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Given parameters is not good" << std::endl;
		return (0);
	}
	Replace	rep(argv[1], argv[2], argv[3]);
	rep.replace();
	return (0);
}