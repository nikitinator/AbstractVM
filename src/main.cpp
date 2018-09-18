/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:42:43 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/18 21:42:02 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Lexer.class.hpp"

#include "OperandCreator.class.hpp"

#include <iostream> //Udoli
#include <string> //Udoli

int		main()
{
	std::string popo("42");
	OperandCreator::instance().createOperand((eOperandType)1, popo);

	return (0);
}
