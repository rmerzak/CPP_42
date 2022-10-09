/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:14:58 by rmerzak           #+#    #+#             */
/*   Updated: 2022/10/09 16:00:21 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie( std::string name );
        Zombie( void );
        ~Zombie( void );
        void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );