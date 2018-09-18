/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Avm.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:00:47 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/05 14:36:10 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVM_CLASS_H
# define AVM_CLASS_H

#include "IOperand.class.hpp"

class Avm
{
public:
	Avm();
	Avm(const Avm& avm);
	~Avm();
	Avm&	operator=(const Avm& avm);

	void	push(IOperand operand);
	void	pop();
	void	dump ();
	void	assert(IOperand operand);
	void	add();
	void	sub();
	void	mul();
	void	div();
	void	mod();
	void	print();
	void	exit();

private:
};

#endif
