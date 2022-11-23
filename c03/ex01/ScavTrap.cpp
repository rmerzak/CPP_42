/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:01:03 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/23 23:29:26 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
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
