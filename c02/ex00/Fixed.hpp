/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:00:38 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/18 00:48:36 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
    private:
        int num;
        const static int nbits = 8;
    public:
        Fixed();
        Fixed(int num);
        Fixed(const Fixed &p);
        ~Fixed();
        void operator = (const Fixed &D);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};