/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:57:39 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/17 18:18:12 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>

enum e_type {
	NONE,
	INT,
	FLOAT,
	CHAR,
	DOUBLE,
	LITERALS
};

class ScalarConverter
{
private:
	char		_c;
	int			_n;
	float		_f;
	double		_d;

	std::string	_str;
	e_type		_type;

	bool	_impossible;
public:
	ScalarConverter();
	~ScalarConverter();
	class ConverterException: public std::exception {
		virtual	const char * what() const throw() {
			return "Unknown type";
		}
	};
	void	setStr(std::string str);
	void	setType(void);

	bool	isChar(void) const;
	bool	isInt(void) const;
	bool	isFloat(void) const;
	bool	isDouble(void) const;
	bool	isLiteral(void) const;

	e_type	getType(void) const;
	void	convert(void);

	bool	isImpossible(void);

	void	printChar(void) const;
};


std::ostream& operator<<(std::ostream& out, const ScalarConverter& obj); 

#endif