/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:00:44 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/22 21:13:31 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
int main(void)
{
    Point const P(1,1);
    Point const A(-2,0);
    Point const B(2,0);
    Point const C(0,2);
    bsp(A,B,C,P);
}
