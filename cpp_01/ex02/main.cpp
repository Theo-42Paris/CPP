/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:47:25 by tzara             #+#    #+#             */
/*   Updated: 2025/10/07 16:41:38 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "Memory adress of the string : " << &s << std::endl;
    std::cout << "Memory adress of stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory adress of stringREF : " << &stringREF << std::endl;

    std::cout << "Value of the string : " << s << std::endl;
    std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value of stringREF : " << stringREF << std::endl;
}


