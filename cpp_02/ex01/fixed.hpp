/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:33:57 by tzara             #+#    #+#             */
/*   Updated: 2026/01/19 14:01:21 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string.h>
# include <cmath> 

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const& copy);
        Fixed(const int input);
        Fixed(const float input);
        ~Fixed(void);

        Fixed& operator=(const Fixed& copy);

        float toFloat( void ) const;
        int toInt( void ) const;

        const int &getRawBits() const;
        void setRawBits(const int &raw);

    private:
        int rawBits;
        static const int fractionalBits = 8;
};

std::ostream &operator<<( std::ostream &output, Fixed const &fixed);

#endif