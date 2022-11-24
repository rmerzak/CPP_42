/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:19:18 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/24 23:49:32 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void operator=(const DiamondTrap &D);
    std::string getName();
    void setName(std::string name);
    void whoAmI();
    void attack(const std::string &target);
};