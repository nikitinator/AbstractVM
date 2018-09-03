/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:03:26 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 15:29:07 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_CLASS_H
# define LEXER_CLASS_H

enum TokenTypes
{
	Instruction = 1,
	Value
};

struct Token
{
	TokenTypes	tokenType;
	string		value;
};

class Lexer
{
public:
	Lexer(int fd);
	Lexer(const Lexer& lexer);
	~Lexer();
	Lexer&	operator=(const Lexer& lexer);

	Token	getToken();
private:
	Lexer();
};

#endif
