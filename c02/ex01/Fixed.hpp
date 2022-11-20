/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:00:38 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/19 21:47:19 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int num;
    const static int nbits = 8;

public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &p);
    ~Fixed();
    void operator=(const Fixed &D);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    friend std::ostream &operator<<(std::ostream &output, const Fixed &D);
};