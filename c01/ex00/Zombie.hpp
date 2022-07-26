/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:14:58 by rmerzak           #+#    #+#             */
/*   Updated: 2022/10/10 15:19:42 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie( std::string name );
        Zombie();
        ~Zombie();
        void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );