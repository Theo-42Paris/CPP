/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:59:19 by tzara             #+#    #+#             */
/*   Updated: 2026/02/16 16:05:31 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Trap created using default constructor\n";
	this->name = "Trap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " created\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other; 
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->hitPoints)
		std::cout << this->name << " tried to attack but it has no hit points!\n";
	else if (!this->energyPoints)
		std::cout << this->name << " tried to attack but it has no energy left!\n";
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints --;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is in Gate keeper mode!\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " destroyed\n";
}