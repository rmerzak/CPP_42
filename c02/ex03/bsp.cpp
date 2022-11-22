/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:39:19 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/22 21:15:04 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <math.h>

Fixed *ft_calcul(Point const X, Point const Y, Point const Z, Point const t)
{
    Fixed Xx = X.getX();
    Fixed Xy = X.getY();
    Fixed Yx = Y.getX();
    Fixed Yy = Y.getY();
    Fixed Zx = Z.getX();
    Fixed Zy = Z.getY();
    Fixed tx = t.getX();
    Fixed ty = t.getY();

    Fixed *w1 = new Fixed(((Xx * (Zy - Xy) + (ty - Xy) * (Zx - Xx) - tx * (Zy - Xy)) / ((Yy - Xy) * (Zx - Xx) - (Yx - Xx) * (Zy - Xy))));
    return w1;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed ay = a.getY();
    Fixed by = b.getY();
    Fixed cy = c.getY();
    Fixed pointy = point.getY();
    Fixed *w1 = ft_calcul(a, b, c, point);
    Fixed *w2 = new Fixed((pointy - ay - w1->operator*(by - ay)) / (cy - ay));
    if (*w1 > 0 && *w2 > 0 && (*w1 + *w2) > 1)
        return (true);
    return (false);
}