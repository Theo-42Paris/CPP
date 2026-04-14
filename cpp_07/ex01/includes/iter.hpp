/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:14:43 by tzara             #+#    #+#             */
/*   Updated: 2026/04/01 14:21:22 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void iter(T *array, int length, F function)
{
    for (int i = 0; i < length; i++)
        function(array[i]);
}

template <typename T, typename F>
void iter(const T *array, int length, F function)
{
    for (int i = 0; i < length; i++)
        function(array[i]);
}

#endif