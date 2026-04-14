/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:42:00 by tzara             #+#    #+#             */
/*   Updated: 2026/04/13 15:05:28 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class NotFoundException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Error, Number not found";
        }
};

template <typename T>
typename T::iterator easyfind(T &container, int i)
{
    typename T::iterator var;
    var = std::find(container.begin(), container.end(), i);
    if (var == container.end())
        throw NotFoundException();
    return (var);
}

#endif