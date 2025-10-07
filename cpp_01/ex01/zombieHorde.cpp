/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:21:52 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:40:07 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string str)
{
    name = str;
}

Zombie* zombieHorde(int n, std::string name)
{
    Zombie *z;
    z = new Zombie[n];
    int i = 0;
    while (i < n)
    {
        z[i].set_name(name);
        z[i].announce();
        i++;
    }
    return (z);
}