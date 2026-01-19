/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:33:57 by tzara             #+#    #+#             */
/*   Updated: 2026/01/19 14:04:28 by tzara            ###   ########.fr       */
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

        bool operator>(const Fixed& input) const;
        bool operator<(const Fixed& input) const;
        bool operator>=(const Fixed& input) const;
        bool operator<=(const Fixed& input) const;
        bool operator==(const Fixed& input) const;
        bool operator!=(const Fixed& input) const;

        Fixed operator+(const Fixed& input) const;
        Fixed operator-(const Fixed& input) const;
        Fixed operator*(const Fixed& input) const;
        Fixed operator/(const Fixed& input) const;

        Fixed& operator++();
		Fixed& operator--();
		Fixed operator++( int );
		Fixed operator--( int );

        static Fixed& min( Fixed &a, Fixed &b);
		static const Fixed& min( const Fixed &a, const Fixed &b);
		static Fixed& max( Fixed &a, Fixed &b);
		static const Fixed& max( const Fixed &a, const Fixed &b);

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