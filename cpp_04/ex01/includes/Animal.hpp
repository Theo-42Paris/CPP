/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:54:13 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 16:48:24 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP 
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	
	public:
		Animal();
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif 
