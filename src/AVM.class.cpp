/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AVM.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:49:39 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 15:49:39 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AVM.class.hpp"

AVM::AVM()
{
}

AVM::AVM(const AVM& aVM)
{
	*this = aVM;
}

AVM::~AVM()
{
}

AVM&	operator=(const AVM& aVM)
{
	if (this == &aVM)
		return (*this);
	return (*this);
}
