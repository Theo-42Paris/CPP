/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:39:04 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:11:45 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
}

Zombie::~Zombie()
{
    std::cout << name << " got destroyed" << std::endl;
    return;
}

void Zombie::announce()
{
    std::cout << name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}