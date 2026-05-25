/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:04:09 by tzara             #+#    #+#             */
/*   Updated: 2026/05/23 15:06:45 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <exception>
# include <string>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
    private :
        std::map<std::string, float> database;
        bool isDateValid(std::string const &date) const;
    
    public :
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &other);
        ~BitcoinExchange();

        void loadDataBase(std::string const &filename);
        void processInput(std::string const &filename);
        float getPrice(std::string const &date) const;
};

#endif