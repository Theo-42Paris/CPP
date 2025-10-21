/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzara <tzara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 02:24:50 by tzara             #+#    #+#             */
/*   Updated: 2025/10/21 02:36:08 by tzara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string.h>

class Harl
{
    private:
	    void debug(void);
	    void info(void);
	    void warning(void);
	    void error(void);

    public:
        void complain(std::string level);
};

#endif