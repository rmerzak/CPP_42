/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:22:06 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/24 22:52:08 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int HitPoints;
    int EnergyPoint;
    int AtackDamage;

public:
    ClapTrap(std::string name);
    ClapTrap(std::string name, int HitPoints, int EnergyPoint, int AtackDamage);
    ClapTrap();
    ClapTrap(const ClapTrap &D);
    void operator=(const ClapTrap &D);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void);
    int getHitPoint(void);
    int getEnergyPoint(void);
    int getAtackDamage(void);
};
