/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:51:14 by rmerzak           #+#    #+#             */
/*   Updated: 2022/07/25 21:44:16 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp";
#include <iostream>
#include <string>

class PhoneBook {
    int counter;
    Contact members[8];
    public:
    PhoneBook();
    ~PhoneBook();
    void ADD(Contact member);
    void SEARCH();
};