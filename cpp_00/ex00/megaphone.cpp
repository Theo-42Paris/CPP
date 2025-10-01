/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:01:58 by tzara             #+#    #+#             */
/*   Updated: 2025/10/01 14:27:19 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string ToUpperCase (std::string str)
{
    std::string var = str;   
    size_t i = 0;
    while (i < str.length())
    {
        var[i] = std::toupper(var[i]);
        i++;
    }
    return (var);
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *" << std::endl;
        return (0);
    }
    else
    {
        while (i < argc)
        {
            std::string str = ToUpperCase(argv[i]);
            std::cout << str;
            i++;
        }
        std::cout << std::endl;
    }
    return (0);  
}