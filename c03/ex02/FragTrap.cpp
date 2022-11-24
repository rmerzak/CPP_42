/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:24 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/24 23:04:23 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << " constructor inside FragTrap " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &D)
{
    if (this != &D)
    {
        this->name = D.name;
        this->EnergyPoint = D.EnergyPoint;
        this->HitPoints = D.HitPoints;
        this->AtackDamage = D.AtackDamage;
    }
}

void FragTrap::operator=(const FragTrap &D)
{
    if (this != &D)
    {
        this->name = D.name;
        this->EnergyPoint = D.EnergyPoint;
        this->HitPoints = D.HitPoints;
        this->AtackDamage = D.AtackDamage;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Give me high five!" << std::endl;
}