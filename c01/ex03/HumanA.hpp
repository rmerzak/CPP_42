/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:45:10 by rmerzak           #+#    #+#             */
/*   Updated: 2022/10/10 15:22:07 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon      &weapon;
    std::string name;
public:
    HumanA( std:: string name, Weapon &weapon );
    ~HumanA();
    void attack();
};

