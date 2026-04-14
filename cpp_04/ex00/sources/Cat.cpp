/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:09:18 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:00:08 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat created\n";
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "miaou\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed\n";
}
