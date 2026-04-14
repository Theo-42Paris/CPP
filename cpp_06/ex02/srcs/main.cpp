/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:11:25 by tzara             #+#    #+#             */
/*   Updated: 2026/04/06 14:32:51 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base * generate(void)
{
    int i = rand() % 3;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}

int main()
{
    std::srand(std::time(0));

    Base* ptr = generate();

    std::cout << "Identify from pointer: ";
    identify(ptr);

    std::cout << "Identify from reference: ";
    identify(*ptr);

    delete ptr;
    return 0;
}