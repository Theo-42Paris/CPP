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

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog created\n";
}

Dog::Dog(const Dog &other)
{
	this->_brain = new Brain(*(other._brain));
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
		this->_type = other._type;
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "ouaf\n";
}

void	Dog::haveIdea(int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

void	Dog::sayIdea(int i)
{
	std::cout << this->_brain->getIdea(i) << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destroyed\n";
}
