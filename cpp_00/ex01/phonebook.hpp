/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:40:48 by tzara             #+#    #+#             */
/*   Updated: 2025/10/01 18:00:57 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <cctype>
# include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        size_t index;
        int oldest_contact;
        int nb_contacts;

    public:
        PhoneBook();
        ~PhoneBook();
        bool add();
        int search();
};

#endif