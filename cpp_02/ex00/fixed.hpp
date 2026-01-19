/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:33:57 by tzara             #+#    #+#             */
/*   Updated: 2026/01/19 12:13:58 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string.h>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const& copy);
        ~Fixed(void);

        Fixed& operator=(const Fixed& copy);

        const int &getRawBits() const;
        void setRawBits(const int &raw);

    private:
        int rawBits;
        static const int fractionalBits = 8;
};

#endif