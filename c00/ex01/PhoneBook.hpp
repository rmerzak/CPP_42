/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:51:14 by rmerzak           #+#    #+#             */
/*   Updated: 2022/10/07 21:26:12 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
    public:
        int counter;
        Contact members[8];
        PhoneBook();
        ~PhoneBook();
        void ADD();
        void SEARCH();
        void DISPLAY();
};
int ft_stoi(const char* string);