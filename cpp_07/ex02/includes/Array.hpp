/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:27:39 by tzara             #+#    #+#             */
/*   Updated: 2026/04/02 14:03:35 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

	private:
		T				*_data;
		unsigned int	_size;

	public:
		Array() : _data(NULL), _size(0) {}
		
		Array(unsigned int n) : _data(NULL), _size(n) 
		{
			if (n > 0) 
			{
				_data = new T[n];
				unsigned int i = 0;
				while (i < n)
				{
					_data[i] = T();
					i++;
				}
			}
		}

		Array(Array const &copy) : _data(NULL), _size(0)
		{
			*this = copy;
		}
		
		Array	&operator=(Array const &copy) 
		{
			if (this != &copy) 
			{
				if (_data)
					delete[] _data;
				_size = copy._size;
				if (_size > 0) 
				{
					_data = new T[_size];
					unsigned int i = 0; 
					while (i < _size)
					{
						_data[i] = copy._data[i];
						i++;
					}
				}
				else 
					_data = NULL;
			}
			return *this;
		}

		~Array() 
		{
			if (_data) 
				delete[] _data;
		}

		T	&operator[](unsigned int index) 
		{
			if (index >= _size)
				throw std::out_of_range("Index out of bounds");
			return _data[index];
		}
		
		T const	&operator[](unsigned int index) const 
		{
			if (index >= _size)
				throw std::out_of_range("Index out of bounds");
			return _data[index];
		}

		unsigned int	size() const 
			return _size;
};

#include "Array.hpp"

#endif