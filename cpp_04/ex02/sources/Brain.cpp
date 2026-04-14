/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:35:29 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/26 15:50:28 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp" 

Brain::Brain()
{
	std::cout << "Brain created\n";
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0; i <= 99; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i <= 99)
		this->_ideas[i] = idea;
}

std::string	Brain::getIdea(int i)
{
	if (i >= 0 && i <= 99)
		return (this->_ideas[i]);
	else
		return ("");
}

Brain::~Brain()
{
	std::cout << "Brain destroyed\n";
}
