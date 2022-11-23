/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:22:02 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/23 22:56:16 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->HitPoints = 10;
    this->EnergyPoint = 10;
    this->AtackDamage = 0;
    std::cout << "Default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoint = 10;
    this->AtackDamage = 0;
    std::cout << "constructor by name is called " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &D)
{
    name = D.name;
    EnergyPoint = D.EnergyPoint;
    HitPoints = D.HitPoints;
    AtackDamage = D.AtackDamage;
}

void ClapTrap::operator=(const ClapTrap &D) /* check this before push*/
{
    std::cout << "Assignment operator called" << std::endl;
    this->name = D.name;
    this->EnergyPoint = D.EnergyPoint;
    this->HitPoints = D.HitPoints;
    this->AtackDamage = D.AtackDamage;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " ,causing " << this->AtackDamage << " points of damage!" << std::endl;
        ;
        this->EnergyPoint--;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint > 0)
    {
        this->HitPoints += amount;
        std::cout << "ClapTrap " << this->name << "take amount " << amount << "of hitpoint!" << std::endl;
        this->EnergyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{ /*
     if (amount - this->HitPoints >= 0)
     {
         std::cout << "ClapTrap "
                   << "is dead!" << std::endl;
         this->HitPoints = 0;
     }
     else if (this->HitPoints - amount > 0)
     {
         this->HitPoints -= amount;
         std::cout << "ClapTrap " << this->name << " take Damage " << amount << " of hitpoint!" << std::endl;
     }*/

    if (this->HitPoints > 0)
    {
        this->HitPoints -= amount;
        if (this->HitPoints < 0)
            this->HitPoints = 0;
        std::cout << "ClapTrap " << this->name << " take Damage " << amount << " of hitpoint!" << std::endl;
        if (this->HitPoints == 0)
        {
            std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        }
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " already is dead!" << std::endl;
    }
}

std::string ClapTrap::getName()
{
    return this->name;
}

int ClapTrap::getHitPoint()
{
    return this->HitPoints;
}
int ClapTrap::getEnergyPoint()
{
    return this->EnergyPoint;
}
int ClapTrap::getAtackDamage()
{
    return this->AtackDamage;
}