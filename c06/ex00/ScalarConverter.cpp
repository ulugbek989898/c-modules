/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:21:47 by uisroilo          #+#    #+#             */
/*   Updated: 2023/02/16 19:45:55 by uisroilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	_c = '\0';
	_n = 0;
	_f = 0.0f;
	_d = 0;
}

ScalarConverter::~ScalarConverter(){}

bool	ScalarConverter::isChar(void) const {
	return	_str.length() == 1 && std::isalpha(_str[0]) && std::isprint(_str[0]);
}

bool	ScalarConverter::isInt( void ) const {
	int	j = 0;
	if ( _str[j] == '-' || _str[j] == '+' )
		j++;
	for ( int i = j; i < ( int ) _str.length(); i++ ) {
		if ( !std::isdigit( _str[i] ) )
			return false;
	}
	return true;
}

bool	ScalarConverter::isFloat(void) const {
	if (_str.find( '.' ) == std::string::npos
		|| _str.back() != 'f' || _str.find('.') == 0
		|| _str.find('.') == _str.length() - 2)
		return false;
	int	found = 0;
	int	j = 0;
	if (_str[j] == '-' || _str[j] == '+')
		j++;
	for (int i = j; i < (int)_str.length() - 1; i++)
	{
		if (_str[i] == '.')
			found++;
		if ((!std::isdigit(_str[i]) && _str[i] != '.') || found > 1)
			return false;
	}
	return true;
}

bool	ScalarConverter::isDouble(void) const {
	if (_str.find( '.' ) == std::string::npos
		|| _str.find('.') == 0
		|| _str.find('.') == _str.length() - 1)
		return false;
	int	found = 0;
	int	j = 0;
	if (_str[j] == '+' || _str[j] == '-')
		j++;
	for (int i = j; i < (int)_str.length(); i++)
	{
		if (_str[i] == '.')
			found++;
		if ((!std::isdigit(_str[i]) && _str[i] != '.') || found > 1)
			return false;
	}
	return true;
}

bool	ScalarConverter::isLiteral(void) const {
	if ( ( _impossible ) || ( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 )
		|| ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) 
		|| ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )
		)
			return true;
	return false;
}

void	ScalarConverter::setType(void) {
	if (isChar())
		_type = CHAR;
	else if (isInt())
		_type = INT;
	else if (isFloat())
		_type = FLOAT;
	else if (isDouble())
		_type = DOUBLE;
	else if (isLiteral())
		_type = LITERALS;
	else
		_type = NONE;
}

e_type	ScalarConverter::getType(void) const {
	return _type;
}

void	ScalarConverter::setStr(std::string str) {
	_str = str;
	setType();
	if (getType() == NONE)
		throw ConverterException();
}

bool	ScalarConverter::isImpossible(void) const {
	try {
		if (_type == INT)
			_n = std::stoi(_str);
		else if (_type == FLOAT)
			_f = std::stof(_str);
		else if (_type == DOUBLE)
			_d = std::stod(_str);
	}
	catch (std::exception &e) {
		_impossible = true;
		return true;
	}
	return false;
}

void	ScalarConverter::convert(void) {
	if (isImpossible())
		return ;
	switch (_type) {
		case CHAR:
			_c = _str[0];
			_n = static_cast<int>(_str[0]);
			_f = static_cast<float>(_str[0]);
			_d = static_cast<double>(_str[0]);
			break;
		case INT:
			_n = std::stoi(_str);
			_c = static_cast<char>(_n);
			_f = static_cast<float>(_n);
			_d = static_cast<double>(_n);
			break;
		case FLOAT:
			_f = std::stof(_str);
			_n = static_cast<int>(_f);
			_c = static_cast<char>(_f);
			_d = static_cast<double>(_f);
			break;
		case DOUBLE:
			_d = std::stod(_str);
			_n = static_cast<int>(_d);
			_c = static_cast<char>(_d);
			_f = static_cast<float>(_d);
			break;
		default:
			break;
	}
}