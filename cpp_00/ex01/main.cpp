/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:33:20 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 16:12:41 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string input;

    while (1) 
    {
        std::cout << "input needs to be [ADD],[SEARCH] or [EXIT]" << std::endl;
        if (!std::getline(std::cin, input))
            return (0);
        if (input == "ADD") 
        {
            if (!phonebook.add())
                return (1);
        }
        else if (input == "SEARCH")
        {
            if (phonebook.search() == 1)
                return (1);
        }
        else if (input == "EXIT")
            break;
    }
    return (0);
}
