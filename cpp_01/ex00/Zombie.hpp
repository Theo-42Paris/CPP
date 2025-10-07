/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:38:33 by tzara             #+#    #+#             */
/*   Updated: 2025/10/02 17:07:50 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cctype>
# include <iostream>
# include <string>
# include <form.h>

class Zombie
{
    private:
	    std::string name;

    public:
        Zombie(std::string str);
	    ~Zombie();
	    void announce();
};

Zombie	*newZombie(std::string str);
void	randomChump(std::string str);

#endif