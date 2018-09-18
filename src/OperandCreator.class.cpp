/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandCreator.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:46:38 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/18 21:37:57 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OperandCreator.class.hpp"
#include <iostream> // deleteme

OperandCreator::ptf_createOperand const OperandCreator::operandCreationFunctions[OT_OPERAND_TYPES_NUM] =
{
	&OperandCreator::createInt8,
	&OperandCreator::createInt16,
	&OperandCreator::createInt32,
	&OperandCreator::createFloat,
	&OperandCreator::createDouble
};

OperandCreator & OperandCreator::instance()
{
	static OperandCreator operandCreator;
	return (operandCreator);
}

OperandCreator::OperandCreator()
{
}

OperandCreator::OperandCreator(const OperandCreator& operandCreator)
{
	*this = operandCreator;
}

OperandCreator::~OperandCreator()
{
}

OperandCreator&	OperandCreator::operator=(const OperandCreator& operandCreator)
{
	if (this == &operandCreator)
		return (*this);
	return (*this);
}

IOperand const * OperandCreator::createOperand(eOperandType type, std::string const & value) const
{
	return ((this->*(OperandCreator::operandCreationFunctions[type]))(value));
}

IOperand const *	OperandCreator::createInt8(std::string const & value) const
{
	(void)value;
	std::cout << "int8" << std::endl;
	return(NULL);
}

IOperand const *	OperandCreator::createInt16(std::string const & value) const
{
	(void)value;
	std::cout << "int16" << std::endl;
	return(NULL);
}

IOperand const *	OperandCreator::createInt32(std::string const & value) const
{
	(void)value;
	return(NULL);
}

IOperand const *	OperandCreator::createFloat(std::string const & value) const
{
	(void)value;
	return(NULL);
}

IOperand const *	OperandCreator::createDouble(std::string const & value) const
{
	(void)value;
	return(NULL);
}
