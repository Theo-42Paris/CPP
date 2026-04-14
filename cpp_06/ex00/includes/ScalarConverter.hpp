/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:51:38 by tzara             #+#    #+#             */
/*   Updated: 2026/03/25 15:35:05 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>
# include <limits.h>
# include <cstdlib>
# include <cctype>

class ScalarConverter
{
    public:
        static void convert(std::string const &str);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();

        static bool  isChar(std::string const &src);
        static bool  isInt(std::string const &src);
        static bool  isFloat(std::string const &src);
        static bool  isDouble(std::string const &src);
        static bool  isPseudoLiteral(std::string const &src);
        static void  printChar(double var);
        static void  printInt(double var);
        static void  printFloat(double var);
        static void  printDouble(double var);
};

#endif