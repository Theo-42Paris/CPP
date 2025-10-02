/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:43:10 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 16:12:32 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <string>

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

std::string format_line(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (std::string(10 - str.length(), ' ') + str);
        
}

void PhoneBook::print_header()
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nb_contacts; i++)
    {
        std::cout << "|" << std::setw(10) << i << "|"
            << format_line(contacts[i].get_first_name()) << "|"  
            << format_line(contacts[i].get_last_name()) << "|"
            << format_line(contacts[i].get_nickname()) << "|" << std::endl;
    }
}

void PhoneBook::print_contact(int index)
{
    std::cout << "First Name: " << contacts[index].get_first_name() << std::endl;
    std::cout << "Last Name: " << contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}

int PhoneBook::search()
{
    if (nb_contacts <= 0)
    {
        std::cout << "No contact available use [ADD]" << std::endl;
        return (0);
    }
    print_header();
    std::cout << "Enter the index of the contact info you wish to see" << std::endl;
    std::string input;
    if (!std::getline(std::cin, input))
    {
        std::cout << "Input Error" << std::endl;
        return (1);
    }
    if (input.length() > 1 || !std::isdigit(input[0]))
    {
        std::cout << "Invalid input, must be one index [0-7]" << std::endl;
        return (0);
    }
    int index = input[0] - '0';
    if (index < 0 || index > (nb_contacts - 1))
    {
        std::cout << "Index out of scope" << std::endl;
        return (0);
    }
    print_contact(index);
    return (0);
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
    contacts[index] = contact;
    if (nb_contacts < 8)
        nb_contacts++;
    else
        oldest_contact = (oldest_contact + 1) % 8;
    return (1);
}
