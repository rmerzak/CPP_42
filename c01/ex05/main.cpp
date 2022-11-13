/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:39:52 by rmerzak           #+#    #+#             */
/*   Updated: 2022/11/13 18:02:47 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl test;
    test.complain("DEBUG");
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    test.complain("not there");
    
}