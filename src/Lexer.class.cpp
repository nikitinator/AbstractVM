/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:03:26 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 17:14:58 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lexer.class.hpp"
#include <stdio.h>
#include <ctype.h>

//ensure includes

Lexer::Lexer()
{
}

Lexer::Lexer(const Lexer& lexer)
{
	*this = lexer;
}

Lexer::~Lexer()
{
}

Lexer&	operator=(const Lexer& lexer)
{
	if (this == &lexer)
		return (*this);
	return (*this);
}

Token	getToken()
{
	char	lastChar;	
	std::string	identifier;

	while (cin >> lastChar)
	{
		identifier
		if (isalpha(lastChar))
			identifier += lastChar;	
		
	}
}
