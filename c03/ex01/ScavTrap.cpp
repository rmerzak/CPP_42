/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:01:03 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/24 22:55:40 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
    std::cout << " constructor inside ScavTrap " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << " constructor inside ScavTrap " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &D)
{
    if (this != &D)
    {
        this->name = D.name;
        this->HitPoints = D.HitPoints;
        this->AtackDamage = D.AtackDamage;
        this->EnergyPoint = D.EnergyPoint;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "inside ScavTrap " << std::endl;
    ClapTrap::attack(target);
}
