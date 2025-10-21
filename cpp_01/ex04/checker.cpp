/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:02:55 by tzara             #+#    #+#             */
/*   Updated: 2025/10/09 13:04:23 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int checker(const std::string &s1, const std::string &s2)
{
    if (s1.empty() || s2.empty())
    {
        std::cout << "s1 or s2 cannot be empty" << std::endl;
        return 1;
    }
    if (s1 == s2)
    {
        std::cout << "s1 and s2 cannot be the same" << std::endl;
        return 1;
    }
    return 0;
}