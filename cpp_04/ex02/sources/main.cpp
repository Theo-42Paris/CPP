/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:53:26 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:04:24 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	//Animal	a;
	Dog*	dog = new Dog();
	Cat*	cat = new Cat();
    Dog		dogCopy;
    Cat		catCopy;

	std::cout << std::endl;
	dog->haveIdea(1, "hello");
	cat->haveIdea(1, "hi");
	dogCopy = *dog;
	catCopy = *cat;
	delete dog;
	delete cat;
	std::cout << std::endl;
	dogCopy.sayIdea(1);
	dogCopy.makeSound();
	catCopy.sayIdea(1);
	catCopy.makeSound();
    std::cout << std::endl;
    return 0;
}
