/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IOperand.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:51:23 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 15:21:09 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOPERAND_CLASS_H
# define IOPERAND_CLASS_H

enum OperandTypes
{
	Int8,
	Int16,
	Int32,
	Float,
	Double
};

class IOperand
{
public:
	virtual int getPrecision(void) const = 0; // Precision of the type of the instance
	virtual eOperandType getType(void) const = 0; // Type of the instance
	virtual IOperand const * operator+(const IOperand & rhs) const = 0; // Sum
	virtual IOperand const * operator-(const IOperand & rhs) const = 0; // Difference
	virtual IOperand const * operator*(const IOperand & rhs) const = 0; // Product
	virtual IOperand const * operator/(const IOperand & rhs) const = 0; // Quotient
	virtual IOperand const * operator%(const IOperand & rhs) const = 0; // Modulo
	virtual std::string const & toString(void) const = 0; // String representation of the instance
	virtual ~IOperand(void) {}
};

#endif
