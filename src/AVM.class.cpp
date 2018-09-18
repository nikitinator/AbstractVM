/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Avm.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:00:47 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/05 14:23:14 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Avm.class.hpp"

Avm::Avm()
{
}

Avm::Avm(const Avm& avm)
{
	*this = avm;
}

Avm::~Avm()
{
}

Avm&	operator=(const Avm& avm)
{
	if (this == &avm)
		return (*this);
	return (*this);
}
