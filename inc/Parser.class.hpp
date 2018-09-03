/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:49:25 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 15:49:25 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_CLASS_H
# define PARSER_CLASS_H

class Parser
{
public:
	Parser();
	Parser(const Parser& parser);
	~Parser();
	Parser&	operator=(const Parser& parser);
private:
};

#endif
