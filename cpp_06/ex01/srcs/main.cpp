/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:23:28 by tzara             #+#    #+#             */
/*   Updated: 2026/03/26 15:38:55 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data d;
    d.number = 42;
    d.name = "Hello";

    std::cout << "Original pointer: " << &d << std::endl;

    unsigned long raw = Serializer::serialize(&d);
    std::cout << "Serialized value: " << raw << std::endl;

    Data* ptr2 = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer: " << ptr2 << std::endl;

    if (ptr2 == &d)
        std::cout << "Success" << std::endl;
    else
        std::cout << "Error" << std::endl;

    std::cout << "Number: " << ptr2->number << ", Name: " << ptr2->name << std::endl;

    return 0;
}