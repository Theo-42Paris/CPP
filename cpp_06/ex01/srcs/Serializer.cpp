/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:31:04 by tzara             #+#    #+#             */
/*   Updated: 2026/03/26 15:36:49 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

unsigned long Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(unsigned long raw)
{
    return reinterpret_cast<Data*>(raw);
}