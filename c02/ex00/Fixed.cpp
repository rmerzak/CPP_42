/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:00:41 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/18 00:53:39 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed()
{
    this->num = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int n)
{
    this->num = n;
}

void Fixed::operator=(const Fixed &D)
{
    this->num = D.num;
    std::cout << "Copy assignment operator called" << std::endl;
}