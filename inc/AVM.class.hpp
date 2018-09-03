/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AVM.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snikitin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:49:39 by snikitin          #+#    #+#             */
/*   Updated: 2018/09/03 15:49:39 by snikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVM_CLASS_H
# define AVM_CLASS_H

class AVM
{
public:
	AVM();
	AVM(const AVM& aVM);
	~AVM();
	AVM&	operator=(const AVM& aVM);
private:
};

#endif
