/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:05:47 by tzara             #+#    #+#             */
/*   Updated: 2026/01/19 13:49:41 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int input)
{
    std::cout << "Int constructor called" << std::endl;
    this->rawBits = input << this->fractionalBits;
}

Fixed::Fixed(const float input)
{
    std::cout << "Float constructor called" << std::endl;
    rawBits = roundf(input * (1 << fractionalBits));
}

Fixed&  Fixed::operator=(const Fixed& other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->rawBits = other.rawBits;
    return *this;
}

std::ostream &operator<<( std::ostream &output, Fixed const &fixed)
{
    output << fixed.toFloat();
    return output;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return this->rawBits / (float)(1 << this->fractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->rawBits >> this->fractionalBits;
}

const int &Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return rawBits;
}

void Fixed::setRawBits(int const &raw)
{
    rawBits = raw;
}