/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:20:31 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:42:53 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
        return (printf("3 arguments needed\n"));
    Zombie *z = zombieHorde(atoi(argv[1]), (argv[2]));
    delete[] z;
    return (0);
}