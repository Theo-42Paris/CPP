/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:32:48 by tzara             #+#    #+#             */
/*   Updated: 2026/02/16 15:49:28 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Trap has been created: Default constructor\n";
    this->name = "Trap";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " has been created\n";
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	std::cout << "Assignement operator called\n";
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (!this->hitPoints)
        std::cout << this->name << " tried to attack but has no hitPoints left\n";
    else if (!this->energyPoints)
        std::cout << this->name << " tried to attack but has no energy left\n";
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage.\n";
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int value)
{
    if (!this->hitPoints)
        std::cout << this->name << " was attacked but has no hitPoints left\n";
    else
    {
        std::cout << this->name << " took " << value << " damage\n";
        if (value >= (unsigned int) this->hitPoints)
            this->hitPoints = 0;
        else
            this->hitPoints -= value;
    }    
}

void	ClapTrap::beRepaired(unsigned int value)
{
	if (!this->hitPoints)
		std::cout << this->name << " tried to repair itself but it has no hit points!\n";
	else if (!this->energyPoints)
		std::cout << this->name << " tried to repair itself but it has no energy points!\n";
	else
	{
		std::cout << this->name << " healed " << value << " hit points!\n";
		this->hitPoints += value;
		this->energyPoints --;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destroyed\n";
}