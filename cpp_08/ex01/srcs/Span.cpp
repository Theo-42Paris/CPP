/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:45:01 by tzara             #+#    #+#             */
/*   Updated: 2026/05/13 14:08:26 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

Span::Span() : n(0)
{   
}

Span::Span(unsigned int n) : n(n)
{   
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        n = other.n;
        v = other.v;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (v.size() >= static_cast<size_t>(this->n))
        throw FullException();
    v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (v.size() + std::distance(begin, end) > n)
        throw FullException();
    v.insert(v.end(), begin, end);
}

int Span::shortestSpan()
{
    if (v.size() <= 1)
        throw NotEnoughNumbersException();
    std::vector<int> temp = v;
    std::sort(temp.begin(), temp.end());
    int min = temp[1] - temp[0];
    for (unsigned int i = 1; i < temp.size(); i++)
    {
        if (temp[i] - temp[i - 1] < min)
        {
            min = temp[i] - temp[i - 1];
        }
    }
    return (min);
}

int Span::longestSpan()
{
    if (v.size() <= 1)
        throw NotEnoughNumbersException();
    std::vector<int> temp = v;
    std::sort(temp.begin(), temp.end());
    return (temp[temp.size() - 1] - temp[0]);
}

const char *Span::FullException::what() const throw()
{
    return ("Container is full\n");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
    return ("Not enough numbers\n");
}