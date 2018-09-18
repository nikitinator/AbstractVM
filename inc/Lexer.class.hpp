/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:03:26 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 16:33:20 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_CLASS_H
# define LEXER_CLASS_H

#include <string>

enum TokenTypes
{
	TOK_PUSH = 0,
	TOK_POP,
	TOK_DUMP,
	TOK_ASSERT,
	TOK_ADD,
	TOK_SUB,
	TOK_MUL,
	TOK_DIV,
	TOK_MOD,
	TOK_PRINT,
	TOK_EXIT,
	TOK_INT8 ,
	TOK_INT16,
	TOK_INT32,
	TOK_FLOAT,
	TOK_DOUBLE,
	TOK_VALUE,
	TOK_NEWLINE
};

std::map<int, std::string> tokensSyntax;


TOK_PUSH      "push"
TOK_POP       "pop"
TOK_DUMP      "dump"
TOK_ASSERT    "assert"
TOK_ADD       "add"
TOK_SUB       "sub"
TOK_MUL       "mul"
TOK_DIV       "div"
TOK_MOD       "mod"
TOK_PRINT     "print"
TOK_EXIT      "exit"
TOK_INT8      "int8 "
TOK_INT16     "int16"
TOK_INT32     "int32"
TOK_FLOAT     "float"
TOK_DOUBLE    "double"

//TOK_VALUE     "value"
//TOK_NEWLINE   "newline"



struct Token
{
	TokenTypes	tokenType;
	std::string		value;
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
