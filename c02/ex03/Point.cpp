/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:39:23 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/20 23:35:36 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    std::cout << this->y << std::endl;
    std::cout << this->x << std::endl;
};

Point:: Point( Fixed const x, Fixed const y): x(x),y(y)
{
    std::cout << this->y << std::endl;
    std::cout << this->x << std::endl;
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
};

Fixed const Point::getX() {
    return (this->x);
}
Fixed const Point::getY() {
    return (this->y);
}