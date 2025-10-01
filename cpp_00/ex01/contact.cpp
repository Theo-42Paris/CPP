/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:16:38 by tzara             #+#    #+#             */
/*   Updated: 2025/10/01 17:11:17 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	Contact::first_name = "";
	Contact::last_name = "";
	Contact::nickname = "";
	Contact::phone_number = "";
	Contact::darkest_secret = "";
}

Contact::~Contact()
{
	return ;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_phone_number()
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string var)
{
	this->first_name = var;
}

void	Contact::set_last_name(std::string var)
{
    this->last_name = var;
}
void	Contact::set_nickname(std::string var)
{
    this->nickname = var;
}
void	Contact::set_phone_number(std::string var)
{
    this->phone_number = var;
}
void	Contact::set_darkest_secret(std::string var)
{
    this->darkest_secret = var;
}
