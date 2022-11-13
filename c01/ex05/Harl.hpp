/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:39:55 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/13 18:18:50 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void none( void );
    public:
        void complain(std::string level);
};
