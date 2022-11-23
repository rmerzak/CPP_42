/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:22:11 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/23 22:51:58 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap x("Astro");
    ClapTrap y("Thor");

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
    y.takeDamage(7);
    return (0);
}