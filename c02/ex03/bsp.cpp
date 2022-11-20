/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:39:19 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/20 23:52:35 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp";

Fixed *ft_calcul(Point X, Point Y, Point Z, Point t)
{
    Fixed Xx = X.getX();
    Fixed Xy = X.getY();
    Fixed Yx = X.getX();
    Fixed Yy = X.getY();
    Fixed Zx = X.getX();
    Fixed Zy = X.getY();
    Fixed tx = X.getX();
    Fixed ty = X.getY();

    Fixed *w1 = new Fixed(((Xx * (Zy - Xy) + (ty - Xy) * (Zx - Xx) - tx * (Zy - Xy)) / ((Yy - Xy) * (Zx - Xx) - (Yx - Xx) * (Zy - Xy))));
    return w1;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed ay = a.getY();
    Fixed Yx = X.getX();
    Fixed *w1 = ft_calcul(a, b, c, point);
    Fixed *w2 = new Fixed();
}