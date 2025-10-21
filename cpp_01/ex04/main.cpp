/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:47:02 by tzara             #+#    #+#             */
/*   Updated: 2025/10/09 13:04:33 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of parameters\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (checker(s1, s2))
        return 1;

    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cout << "Error: opening file" << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(infile, line))
        content += line + "\n";
    infile.close();

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cout << "Error: opening file" << std::endl;
        return 1;
    }

    std::string result;
    size_t pos = 0;
    size_t found;
    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += content.substr(pos);

    outfile << result;
    outfile.close();

    return 0;
}