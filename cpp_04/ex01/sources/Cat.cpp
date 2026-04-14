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

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat created\n";
}

Cat::Cat(const Cat &other)
{
	this->_brain = new Brain(*(other._brain));
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
		this->_type = other._type;
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "miaou\n";
}

void	Cat::haveIdea(int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

void	Cat::sayIdea(int i)
{
	std::cout << this->_brain->getIdea(i) << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destroyed\n";
}
