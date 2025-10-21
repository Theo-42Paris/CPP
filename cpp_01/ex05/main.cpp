/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 02:25:20 by tzara             #+#    #+#             */
/*   Updated: 2025/10/21 02:54:16 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2 || !argv[1][0])
    {
        std::cout << "Erreur arguments\n";
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}