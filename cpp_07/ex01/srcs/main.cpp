/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:15:13 by tzara             #+#    #+#             */
/*   Updated: 2026/04/01 14:21:47 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

// Fonction classique
template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
}

// Fonction qui modifie (non const)
template <typename T>
void increment(T &x)
{
    x++;
}

// Spécialisation pour string (optionnel)
void toUpper(std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
}

int main(void)
{
    // 🔹 Test avec int
    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;

    std::cout << "Original int array:" << std::endl;
    iter(arr, len, print<int>);

    iter(arr, len, increment<int>);

    std::cout << "After increment:" << std::endl;
    iter(arr, len, print<int>);

    std::cout << "------------------" << std::endl;

    // 🔹 Test avec string
    std::string strArr[] = {"hello", "world", "test"};

    std::cout << "Original string array:" << std::endl;
    iter(strArr, 3, print<std::string>);

    iter(strArr, 3, toUpper);

    std::cout << "After toUpper:" << std::endl;
    iter(strArr, 3, print<std::string>);

    std::cout << "------------------" << std::endl;

    // 🔹 Test avec const array
    const int constArr[] = {10, 20, 30};

    std::cout << "Const array:" << std::endl;
    iter(constArr, 3, print<int>);

    return 0;
}