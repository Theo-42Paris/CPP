/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:10:31 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:00:17 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog created\n";
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "ouaf\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed\n";
}
