/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:27:39 by tzara             #+#    #+#             */
/*   Updated: 2026/05/06 14:27:33 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

	private:
		T				*data;
		unsigned int	size;

	public:
		Array() : data(NULL), size(0) 
		{	
		}
		
		Array(unsigned int n) : data(NULL), size(n) 
		{
			if (n > 0) 
			{
				data = new T[n];
				unsigned int i = 0;
				while (i < n)
				{
					data[i] = T();
					i++;
				}
			}
		}

		Array(Array const &copy) : data(NULL), size(0)
		{
			*this = copy;
		}
		
		Array	&operator=(Array const &other) 
		{
			if (this != &other) 
			{
				if (data)
					delete[] data;
				size = other.size;
				if (size > 0) 
				{
					data = new T[size];
					unsigned int i = 0; 
					while (i < size)
					{
						data[i] = other.data[i];
						i++;
					}
				}
				else 
					data = NULL;
			}
			return *this;
		}

		~Array() 
		{
			if (data) 
				delete[] data;
		}

		T	&operator[](unsigned int index) 
		{
			if (index >= size)
				throw std::out_of_range("Index out of bounds");
			return data[index];
		}
		
		T const	&operator[](unsigned int index) const 
		{
			if (index >= size)
				throw std::out_of_range("Index out of bounds");
			return data[index];
		}

		unsigned int	ft_size() const
		{
			return (size);
		}
};

#endif