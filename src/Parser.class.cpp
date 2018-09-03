/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:49:25 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 15:49:25 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.class.hpp"

Parser::Parser()
{
}

Parser::Parser(const Parser& parser)
{
	*this = parser;
}

Parser::~Parser()
{
}

Parser&	operator=(const Parser& parser)
{
	if (this == &parser)
		return (*this);
	return (*this);
}
