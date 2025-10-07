/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:38:21 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:17:03 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("Hahaha");
    z->announce();
    Zombie *zz = newZombie("Hohoho");
    zz->announce();
    Zombie *zzz = newZombie("Hehehe");
    zzz->announce();
    randomChump("Zehaha");
    delete z;
    delete zz;
    delete zzz;
    return (0);
}