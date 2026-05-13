/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:27:06 by tzara             #+#    #+#             */
/*   Updated: 2026/05/13 14:05:01 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

class Span
{
    private:
        unsigned int n;
        std::vector<int> v;

    public :
        Span();
        Span(unsigned int n);
        Span(const Span &copy);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();

        class FullException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class NotEnoughNumbersException : public std::exception
        {
            public :
                virtual const char * what() const throw();
        };
};

#endif