/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IOperand.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:51:23 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/05 20:53:43 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOPERAND_CLASS_H
# define IOPERAND_CLASS_H

# include <string>

enum eOperandType
{
	OT_INT8 = 0,
	OT_INT16,
	OT_INT32,
	OT_FLOAT,
	OT_DOUBLE,
	OT_OPERAND_TYPES_NUM
};

class IOperand
{
public:
	virtual int					getPrecision(void) const = 0; // Precision of the type of the instance
	virtual eOperandType		getType(void) const = 0; // Type of the instance
	virtual IOperand const *	operator+(const IOperand & rhs) const = 0; // Sum
	virtual IOperand const *	operator-(const IOperand & rhs) const = 0; // Difference
	virtual IOperand const *	operator*(const IOperand & rhs) const = 0; // Product
	virtual IOperand const *	operator/(const IOperand & rhs) const = 0; // Quotient
	virtual IOperand const *	operator%(const IOperand & rhs) const = 0; // Modulo
	virtual std::string const &	toString(void) const = 0; // String representation of the instance
	virtual ~IOperand(void) {}
};

#endif
