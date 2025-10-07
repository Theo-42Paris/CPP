/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:21:39 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:36:17 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
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