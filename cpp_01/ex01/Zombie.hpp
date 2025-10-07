/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:20:51 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:45:47 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cctype>
# include <iostream>
# include <string>
#include <form.h>

class Zombie
{
    private:
	    std::string name;

    public:
        Zombie();
	    ~Zombie();
	    void announce();
        void set_name(std::string name);
        
};

Zombie* zombieHorde(int n, std::string name);

#endif