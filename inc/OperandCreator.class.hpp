/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandCreator.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:46:38 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/18 21:40:26 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERANDCREATOR_CLASS_H
# define OPERANDCREATOR_CLASS_H

# include "IOperand.class.hpp"
# include <string>

//IOperand *(OperandCreator::*)(const std::string &)
//const IOperand *(OperandCreator::*)(const  std::string &) const

class OperandCreator
{
public:
	static OperandCreator &	instance();
	IOperand const *		createOperand(eOperandType type,
		std::string const & value) const;

private:
	OperandCreator();
	OperandCreator(const OperandCreator& operandCreator);
	~OperandCreator();
	OperandCreator&	operator=(const OperandCreator& operandCreator);


	IOperand const *	createInt8(std::string const & value) const;
	IOperand const *	createInt16(std::string const & value) const;
	IOperand const *	createInt32(std::string const & value) const;
	IOperand const *	createFloat(std::string const & value) const;
	IOperand const *	createDouble(std::string const & value) const;

	typedef IOperand const * (OperandCreator::*ptf_createOperand)(std::string const &) const;
	static ptf_createOperand const operandCreationFunctions[OT_OPERAND_TYPES_NUM];
};


#endif
