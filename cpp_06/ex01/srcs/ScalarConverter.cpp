/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:58:50 by tzara             #+#    #+#             */
/*   Updated: 2026/03/26 15:24:19 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void) other;
    std::cout << "Copy assignement operator called\n";
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor called\n";
}

bool ScalarConverter::isChar(std::string const &str)
{
    return (str.length() == 1 && !std::isdigit(str[0]));
}

bool ScalarConverter::isInt(std::string const &src)
{
    if(src.empty())
        return false;

    size_t i = 0;
    
    if (src[i] == '+' || src[i] == '-')
        i++;
    if (i >= src.length())
        return false;
    while (i < src.length())
    {
        if (!std::isdigit(src[i]))
            return false;
        i++;
    }
    return true;
}

bool ScalarConverter::isFloat(std::string const &str)
{
    if (str.empty() || str[str.length() - 1] != 'f')
        return false;

    std::string nombre = str.substr(0, str.length() - 1);

    size_t index = 0;
    bool point_trouve = false;

    if (nombre[index] == '+' || nombre[index] == '-')
        index++;

    if (index >= nombre.length())
        return false;

    while (index < nombre.length())
    {
        if (nombre[index] == '.')
        {
            if (point_trouve)
                return false;
            point_trouve = true;
        }
        else if (!std::isdigit(nombre[index]))
            return false;

        index++;
    }

    return point_trouve;
}

bool ScalarConverter::isDouble(std::string const &str)
{
    bool point = false;
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;

    if (i >= str.length())
        return false;

    for (; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            if (point)
                return false;
            point = true;
        }
        else if (!std::isdigit(str[i]))
            return false;
    }

    return point;
}

bool ScalarConverter::isPseudoLiteral(std::string const &str) 
{
	return (str == "-inff" || str == "+inff" || str == "-inf" || str == "+inf" || str == "nanf" || str == "nan");
}

void ScalarConverter::printChar(double var)
{
    if (std::isnan(var) || std::isinf(var) || var < 0 || var > 127)
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }

    char c = static_cast<char>(var);

    if (!std::isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void ScalarConverter::printInt(double var)
{
    if (std::isnan(var) || std::isinf(var))
    {
       std::cout << "int : impossible\n";
       return ; 
    }

    if (var >  INT_MAX || var < INT_MIN)
    {
        std::cout << "int : error overflow\n";
        return;
    }
    std::cout << "int : " << static_cast<int>(var) << std::endl;
}

void ScalarConverter::printFloat(double var)
{
    float floatVar = static_cast<float>(var);
    std::cout << "float : " << std::fixed << std::setprecision(1) << floatVar << "f\n";
}

void ScalarConverter::printDouble(double var)
{
    std::cout << "double : " << std::fixed << std::setprecision(1) << var << "\n";
}

void ScalarConverter::convert(std::string const &str)
{
    double var;

    if (isPseudoLiteral(str))
    {
        if (str == "nan" || str == "nanf")
            var = std::numeric_limits<double>::quiet_NaN();
        else if (str == "+inf" || str == "+inff")
            var = std::numeric_limits<double>::infinity();
        else if (str == "-inf" || str == "-inff")
            var = -std::numeric_limits<double>::infinity();
        else
        {
            std::cerr << "Error: Invalid Pseudoliteral\n";
            return;
        }
    }
    else if (isChar(str))
    {
        var = static_cast<double>(str[0]);
    }
    else if (isInt(str) || isFloat(str) || isDouble(str))
    {
        char *end;
        var = std::strtod(str.c_str(), &end);

        if (*end != '\0' && !(isFloat(str) && *end == 'f' && *(end + 1) == '\0'))
        {
            std::cerr << "Error: Invalid input\n";
            return;
        }
    }
    else
    {
        std::cerr << "Error: Invalid input\n";
        return;
    }
    printChar(var);
    printInt(var);
    printFloat(var);
    printDouble(var);
}