/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:22:11 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/24 22:39:48 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // ScavTrap x("Astro");
    // ScavTrap y("Thor");

    ClapTrap *b = new ScavTrap();

    delete b;
    /*
        x.attack(y.getName());
        y.takeDamage(3);
        std::cout << x.getEnergyPoint() << std::endl;
        std::cout << y.getEnergyPoint() << std::endl;
        std::cout << y.getHitPoint() << std::endl;
        y.beRepaired(1);
        std::cout << y.getEnergyPoint() << std::endl;
        std::cout << y.getHitPoint() << std::endl;
        y.takeDamage(9);
        std::cout << y.getEnergyPoint() << std::endl;
        std::cout << y.getHitPoint() << std::endl;
        y.takeDamage(7);*/
    return (0);
}