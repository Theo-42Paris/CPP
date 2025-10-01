/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:43:10 by tzara             #+#    #+#             */
/*   Updated: 2025/10/01 18:06:25 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#

PhoneBook::PhoneBook()
{
	PhoneBook::oldest_contact = 0;
	PhoneBook::nb_contacts = 0;
    PhoneBook::index = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

bool PhoneBook::add()
{
	Contact contact;
    std::string var = "";
    while (true)
    {
        std::cout << "Enter the first name: " << std::endl;
        if (!std::getline(std::cin, var))
            return (1);
        size_t start = var.find_first_not_of(" \t\n\r\f\v");
        if (start != std::string::npos)
            break;
    }
    contact.set_first_name(var);
    var = "";
    while (true)
    {
        std::cout << "Enter the last name: " << std::endl;
        if (!std::getline(std::cin, var))
            return (1);
        size_t start = var.find_first_not_of(" \t\n\r\f\v");
        if (start != std::string::npos)
            break;
    }
    contact.set_last_name(var);
    var = "";
    while (true)
    {
        std::cout << "Enter the nickname: " << std::endl;
        if (!std::getline(std::cin, var))
            return (1);
        size_t start = var.find_first_not_of(" \t\n\r\f\v");
        if (start != std::string::npos)
            break;
    }
    contact.set_nickname(var);
    var = "";
    size_t i = 0;
    while (true)
    {
        std::cout << "Enter the phone number: " << std::endl;
        if (!std::getline(std::cin, var))
            return (1);
        size_t start = var.find_first_not_of(" \t\n\r\f\v");
        if (start == std::string::npos)
            continue;
        bool valid = true;
        while (i < var.length())
        {
            if (!isdigit((var[i])))
            {
                std::cout << "The phone number must contain only digits" << std::endl;
                valid = false;
                break;
            }
            i++;
        }
        if (valid)
            break;
    }
    contact.set_phone_number(var);
    var = "";
    while (true)
    {
        std::cout << "Enter the darkest secret: " << std::endl;
        if (!std::getline(std::cin, var))
            return (1);
        size_t start = var.find_first_not_of(" \t\n\r\f\v");
        if (start != std::string::npos)
            break;
    }
    contact.set_darkest_secret(var);
    var = "";
    if (nb_contacts < 8)
        index = nb_contacts;
    else
        index = oldest_contact;
    if (nb_contacts < 8)
        nb_contacts++;
    else
        oldest_contact = (oldest_contact + 1) % 8;
    return (1);
}
