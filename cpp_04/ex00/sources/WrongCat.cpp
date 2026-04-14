/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:09:18 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:00:53 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat created\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "miaou\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed\n";
}
