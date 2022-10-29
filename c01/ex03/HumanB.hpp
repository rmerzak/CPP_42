/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:45:14 by rmerzak           #+#    #+#             */
/*   Updated: 2022/10/10 15:16:10 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};
